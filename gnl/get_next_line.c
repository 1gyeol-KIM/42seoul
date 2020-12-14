/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 02:28:33 by hangkim           #+#    #+#             */
/*   Updated: 2020/12/15 02:29:07 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(int fd, char **line)
{
	static char		*buf[OPEN_MAX];
	int				rdbytes;

	if (fd < 0 || fd >= OPEN_MAX)
		return (ft_free(line, NULL, STATUS_ERROR));
	if (!buf[fd])
		buf[fd] = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (line == NULL || BUFFER_SIZE <= 0 || !buf[fd])
		return (ft_free(line, &buf[fd], STATUS_ERROR));
	*line = NULL;
	if (gnl_append(line, buf[fd]) == STATUS_SUCCESS)
		return (STATUS_SUCCESS);
	while ((rdbytes = read(fd, buf[fd], BUFFER_SIZE)) > 0)
	{
		if (gnl_append(line, buf[fd]) == STATUS_SUCCESS)
			return (STATUS_SUCCESS);
	}
	if (rdbytes == -1)
		return (ft_free(line, &buf[fd], STATUS_ERROR));
	return (ft_free(NULL, &buf[fd], STATUS_EOF));
}
