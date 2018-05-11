/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 16:59:59 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/03 12:58:12 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		y;
	int		x;
	int		i;
	char	**new;

	x = 0;
	i = 0;
	new = s ? (char **)malloc((ft_wordcount(s, c)) * sizeof(char *)) : NULL;
	if (!new || !ft_wordcount(s, c))
		return (NULL);
	while (s[i])
	{
		y = 0;
		while (s[i] == c && s[i])
			i++;
		if (ft_strsubcount(s, i, c) != 0)
		{
			new[x] = ft_strnew(ft_strsubcount(s, i, c));
			while (s[i] != c && s[i])
				new[x][y++] = s[i++];
			new[x++][y] = '\0';
		}
	}
	new[x] = 0;
	return (new);
}
