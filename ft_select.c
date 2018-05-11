/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 12:34:28 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/10 23:08:43 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	print_list(t_select *head, t_info *info)
{
	int c;

	c = 0;
	find_selected(&head, info, 0);
	ft_putstr_fd(tgetstr("cl", 0), 1);
	while (head->count < info->count)
	{
		ft_putstr(tgoto(tgetstr("cm", 0), info->row, c));
		if (head->is_pressed)
			ft_printf("%s%s%s", info->sta, head->name, info->ste);
		else if (!head->is_selected)
			ft_putstr(head->name);
		else
			ft_printf("%s%s%s", UNDERLINE, head->name, info->ste);
		c++;
		if (c == info->count)
			break ;
		head = head->next;
	}
}

void	find_selected(t_select **head, t_info *info, int i)
{
	t_select *ptr;

	ptr = *head;
	while (ptr->count != info->col)
	{
			ptr->is_selected = 0;
		ptr = ptr->next;
	}
	if (i == 1)
		ptr->is_pressed = ptr->is_pressed ? 0 : 1;
	ptr->is_selected = 1;
	if (ptr->next)
		ptr = ptr->next;
	while (ptr->count != info->col)
	{
		ptr->is_selected = 0;
		ptr = ptr->next;
	}
}

struct termios	create_env()
{
	struct termios tios;
	struct termios orig_tios;

	if (tcgetattr(0, &orig_tios))
		return orig_tios;
	if (!getenv("TERM") || tgetent(NULL, getenv("TERM")) == -1)
        return orig_tios;
	ft_putstr(tgetstr("vi", 0));
	ft_memcpy(&tios, &orig_tios, sizeof(tios));
	tios.c_lflag &= ~ICANON;
	tios.c_lflag |= ECHO;
	tios.c_cc[VMIN] = 1;
    tios.c_cc[VTIME] = 0;
	if (tcsetattr(0, TCSANOW, &tios))
		return (orig_tios);
	else if (tcgetattr(0, &tios))
		tcsetattr(0, TCSANOW, &orig_tios);
	else if ((tios.c_lflag & ICANON) || !(tios.c_lflag & ECHO))
		tcsetattr(0, TCSANOW, &orig_tios);
	return (orig_tios);
/*
	struct termios	new_opts;

	if (!getenv("TERM") || tgetent(NULL, getenv("TERM")) == -1)
        return (-1);
	ft_putstr_fd(tgetstr("vi", 0), 1);
	if (tcgetattr(0, org_opts))
	{
		ft_printf("Error fetching orignal options\n");
		return (-1);
	}
	ft_memcpy(&new_opts, org_opts, sizeof(new_opts));
	new_opts.c_lflag &= ~(ICANON);
	new_opts.c_lflag &= ~(ECHO);
	new_opts.c_cc[VMIN] = 1;
    new_opts.c_cc[VTIME] = 0;
	if (tcsetattr(0, TCSANOW, &new_opts)){
		printf("Error applying terminal settingsn");
		return -1;
	}
	if (tcgetattr(0, &new_opts))
	{
		tcsetattr(0, TCSADRAIN, org_opts);
		printf("Error while asserting terminal settings\n");
		return (-1);
	}
//	if (tcsetattr(0, TCSANOW, &new_opts))
	return (1);
*/
}

void	start_print(t_select **head, t_info *info)
{
	long long c;

	c = 0;
	while ((c = ft_getchar()))
	{
		if (c == RIGHT_KEY || c == DOWN_KEY)
			info->col = info->col < info->count - 1 ? info->col + 1 : 0;
		else if (c == LEFT_KEY || c == UP_KEY)
			info->col = info->col > 0 ? info->col - 1 : info->count - 1;
		else if (c == 27)
			break ;
		else if (c == SPC_KEY)
			find_selected(head, info, 1);
		else if (c == ENTER_KEY)
		{
			
		}
		print_list(*head, info);
	}
	ft_putstr_fd(tgetstr("cl", 0), 1);
}

void	ft_select(char **argv, int i)
{
	t_info		info;
	t_select	*head;
	struct termios	orig_opts;

	head = NULL;
	init_info(&info);
	orig_opts = create_env();
	while (argv[i])
	{
		add_elem(&head, argv[i], &info);
		i++;
	}
	link_list(&head);
	print_list(head, &info);
	start_print(&head, &info);
	ft_putstr(tgetstr("ve", 0));
//	if (tcsetattr(0, TCSANOW, &orig_opts))
//		ft_printf("Error reloading default terminal configuration\n");
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	else
		ft_select(argv, 1);
}
