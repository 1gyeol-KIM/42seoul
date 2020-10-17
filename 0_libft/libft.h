/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:21:23 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/17 15:42:46 by hangkim          ###   ########.fr       */
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
int     strncmp(const char *s1, const char *s2, size_t n);

int		ft_atoi(const char *str);
int     ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

void    *calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);

#endif