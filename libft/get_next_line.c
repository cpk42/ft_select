/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 20:13:43 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/02 22:54:04 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_get_line(char **temp, int fd, char **line)
{
	char *ap;
	char *mem;

	if (!temp[fd])
		return (0);
	if ((ap = ft_strchr(temp[fd], '\n')))
	{
		mem = temp[fd];
		*ap = '\0';
		*line = ft_strdup(temp[fd]);
		temp[fd] = ft_strdup(ap + 1);
		ft_strdel(&mem);
		return (1);
	}
	else if (*temp[fd])
	{
		*line = ft_strdup(temp[fd]);
		ft_strdel(&temp[fd]);
		return (1);
	}
	return (0);
}

int		ft_read(char **temp, int fd)
{
	char	*buf;
	char	*mem;
	int		res;

	buf = ft_strnew(BUFF_SIZE);
	while ((res = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (!temp[fd])
			temp[fd] = ft_strdup(buf);
		else
		{
			mem = temp[fd];
			temp[fd] = ft_strjoin(temp[fd], buf);
			ft_strdel(&mem);
		}
		ft_bzero(buf, BUFF_SIZE);
	}
	ft_strdel(&buf);
	return (res);
}

int		get_next_line(const int fd, char **line)
{
	static char *temp[4864];

	if (!line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	if (ft_read(&temp[fd], fd) < 0)
		return (-1);
	if (ft_get_line(&temp[fd], fd, line) == 1)
		return (1);
	return (0);
}
