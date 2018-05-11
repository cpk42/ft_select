/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 12:34:43 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/10 22:55:42 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H
# include "libft/libft.h"
# include <termcap.h>
# include <termios.h>
# include <sys/ioctl.h>
# include <curses.h>
# include <term.h>
# define REV_VIDEO_COLOR	"\033[7m"
# define UNDERLINE			"\033[4m"
# define DEFAULT			"\033[0m"
# define ENTER_KEY                10
# define ESC_KEY                27
# define SPC_KEY                32
# define STAR_KEY               42
# define MINUS_KEY              45
# define O_KEY                  111
# define B_KEY                  98
# define BSP_KEY                127
# define LEFT_KEY               4479771
# define RIGHT_KEY              4414235
# define UP_KEY                  4283163
# define DOWN_KEY               4348699
# define DEL_KEY                2117294875L

typedef struct		s_info
{
	char			*clr;
	char			*got;
	char			*sta;
	char			*ste;
	int				row;
	int				col;
	int				count;
	char			buf[1024];
	
}					t_info;

typedef struct		s_select
{
	int				is_selected;
	int				is_pressed;
	int				count;
	char			name[1024];
	char			l;
	struct s_select	*next;
	struct s_select	*prev;
}					t_select;

/*
** Initialize list
*/

t_select			*create_elem(char *str, char l, t_info *info);
void				add_elem(t_select **head, char *name, t_info *info);
void				init_info(t_info *info);
void				link_list(t_select **head);

/*
** Print utilities
*/

void				start_print(t_select **head, t_info *info);
void				ft_select(char **argv, int i);
void				print_list(t_select *head, t_info *info);

/*
** Extra utilities
*/

long long			ft_getchar();
struct termios		create_env();
void				find_selected(t_select **head, t_info *info, int i);

#endif
