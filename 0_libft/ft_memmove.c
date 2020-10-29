/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 10:21:08 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/29 20:21:52 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (dst <= src)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        while (n--)
        {
            *(d + n) = *(s + n);
            d++;
            s++;
        }
    }
    return (dst);
}