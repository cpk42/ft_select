/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 15:13:47 by ckrommen          #+#    #+#             */
/*   Updated: 2017/09/26 19:56:45 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	new = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new)
	{
		while (s[i])
		{
			new[i] = f(s[i]);
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
