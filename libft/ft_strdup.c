/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:58:45 by ckrommen          #+#    #+#             */
/*   Updated: 2017/09/24 14:43:25 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;

	str2 = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (str2)
		return (ft_strcpy(str2, (char *)str));
	return (NULL);
}
