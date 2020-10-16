/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 10:44:42 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/16 11:02:03 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *src, int c, size_t n)
{
    while (n--)
    {
        if (*(unsigned char *)src == (unsigned char)c)
            return (void *)(src);
        src++;
    }
    return (0);
}