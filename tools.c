/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 19:53:25 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/10 22:43:08 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

long long	ft_getchar()
{
	long long	c;

	c = 0;
	read(0, &c, 8);
	return (c);
}

void		init_info(t_info *info)
{
	info->sta = REV_VIDEO_COLOR;
	info->ste = DEFAULT;
	info->row = 0;
	info->col = 0;
	info->count = 0;
	ft_bzero(info->buf, 1024);
}

t_select	*create_elem(char *str, char l, t_info *info)
{
	t_select	*elem;

	elem = (struct s_select *)malloc(sizeof(struct s_select));
	ft_bzero(elem->name, 1024);
	ft_strcpy(elem->name, str);
	elem->is_selected = 0;
	elem->is_pressed = 0;
	elem->count = info->count;
	elem->l = l;
	elem->next = NULL;
	elem->prev = NULL;
	info->count += 1;
	return (elem);
}

void		link_list(t_select **head)
{
	t_select	*tail;

	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->l = 't';
	tail->next = *head;
	(*head)->prev = tail;
}

void		add_elem(t_select **head, char *name, t_info *info)
{
	t_select	*elem;
	t_select	*ptr;

	if (*head)
	{
		elem = create_elem(name, 'b', info);
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = elem;
		elem->prev = ptr;
	}
	else
		*head = create_elem(name, 'h', info);
}
