/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:55:22 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/03 13:16:41 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *str, char c)
{
	int i;
	int count;
	int toggle;

	toggle = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			toggle = 0;
		else if (!toggle && str[i])
		{
			toggle = 1;
			count++;
		}
		i++;
	}
	return (count += 1);
}
