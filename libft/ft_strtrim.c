/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 14:40:47 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/02 15:27:32 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char				*fresh;
	int					start;
	unsigned int		i;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i++;
	start = i;
	if (s[start] == '\0')
	{
		fresh = ft_strnew(0);
		fresh[0] = '\0';
		return (fresh);
	}
	while (s[i])
		i++;
	i--;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i--;
	if (!(fresh = (ft_strsub(s, start, i - start + 1))))
		return (NULL);
	return (fresh);
}
