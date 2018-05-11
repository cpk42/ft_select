/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:29:23 by ckrommen          #+#    #+#             */
/*   Updated: 2017/09/25 15:10:28 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = dest;
	ptr2 = (char *)src;
	if (ft_strlen(ptr2) < len)
	{
		while (i++ < ft_strlen(ptr2))
			*dest++ = *src++;
		while (i++ <= len)
			*dest++ = '\0';
	}
	else
	{
		while (i++ < len && src)
			*dest++ = *src++;
	}
	return (ptr);
}
