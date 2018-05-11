/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 14:05:27 by ckrommen          #+#    #+#             */
/*   Updated: 2018/02/26 14:32:31 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "./libft.h"
# define BUFF_SIZE 32

int		get_next_line(const int fd, char **line);
int		ft_read(char **temp, int fd);
int		ft_get_line(char **temp, int fd, char **line);

#endif
