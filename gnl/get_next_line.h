/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 02:29:30 by hangkim           #+#    #+#             */
/*   Updated: 2020/12/15 02:29:33 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define GNL_STATUS int
# define STATUS_SUCCESS 1
# define STATUS_ERROR -1
# define STATUS_EOF 0
# include <stdbool.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif
# ifndef OPEN_MAX
#  define OPEN_MAX 256
# endif

int			get_next_line(int fd, char **line);
GNL_STATUS	ft_free(char **ptr1, char **ptr2, GNL_STATUS status);
GNL_STATUS	gnl_append(char **line, char *buf);
size_t		gnl_len(char *buf);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_calloc(size_t a, size_t b);
#endif
