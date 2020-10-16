/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 09:56:21 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/16 10:13:46 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char)dst;
    s = (unsigned char)src;
    while (n--)
    {
        *d++ = *s++;
        if (*s == (unsigned char)c)
            return (d);
    }
    return (0);
}