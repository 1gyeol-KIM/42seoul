/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:21:23 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/16 23:45:23 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct      s_list
{
	void 			*content;
	struct s_list 	*next;
}				 	t_list;

void    *ft_memset(void *ptr, int value, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t num);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t n);
void    *ft_memchr(const void *src, int c, size_t n);
int     memcmp(const void *src1, const void *src2, size_t n);

size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*strnstr(const char *haystack, const char *needle, size_t len);


#endif