/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubcount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 12:52:35 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/03 12:52:54 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strsubcount(char const *s, int index, char c)
{
	int i;

	i = 0;
	while (s[index] != c && s[index])
	{
		index++;
		i++;
	}
	return (i);
}
