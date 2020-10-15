/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:27:09 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/15 22:06:48 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *ptr, int value, size_t len)
{
    unsigned char *p;
    
    p = (unsigned char *)ptr;
    while (len--)
        *p++ = (unsigned char) value;
    return (ptr);
}