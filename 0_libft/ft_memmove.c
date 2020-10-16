/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 10:21:08 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/16 10:44:18 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char)dst;
    s = (unsigned char)s;
    if (dst <= src)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        while (n--)
            *(d + n)++ = *(s + n)++;
    }
    return (dst);
}