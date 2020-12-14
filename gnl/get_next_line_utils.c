/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 02:30:54 by hangkim           #+#    #+#             */
/*   Updated: 2020/12/15 02:30:56 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

GNL_STATUS	ft_free(char **ptr1, char **ptr2, GNL_STATUS status)
{
	if (ptr1)
	{
		if (*ptr1)
			free(*ptr1);
		*ptr1 = NULL;
	}
	if (ptr2)
	{
		if (*ptr2)
			free(*ptr2);
		*ptr2 = NULL;
	}
	return (status);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (s < d)
		while (++i <= len)
			d[len - i] = s[len - i];
	else
		while (len-- > 0)
			*(d++) = *(s++);
	return (dst);
}

void		*ft_calloc(size_t a, size_t b)
{
	char *const tmp = malloc(a * b);
	size_t		i;

	if (!tmp)
		return (NULL);
	i = 0;
	while (i < a * b)
		tmp[i++] = 0;
	return (void*)tmp;
}

size_t		gnl_len(char *buf)
{
	size_t i;

	if (buf == NULL)
		return (0);
	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

GNL_STATUS	gnl_append(char **line, char *buf)
{
	const size_t	llen = gnl_len(*line);
	size_t			blen;
	char			*tmp;
	int				status;

	blen = gnl_len(buf);
	tmp = ft_calloc(llen + blen + 1, sizeof(char));
	if (!tmp)
		return (STATUS_ERROR);
	ft_memmove(tmp, *line, llen);
	ft_memmove(&tmp[llen], buf, blen);
	if (*line)
		free(*line);
	*line = tmp;
	status = buf[blen] == '\n';
	ft_memmove(buf, &buf[blen + 1], BUFFER_SIZE - blen);
	while (blen)
	{
		buf[BUFFER_SIZE - blen] = 0;
		blen--;
	}
	return (status);
}
