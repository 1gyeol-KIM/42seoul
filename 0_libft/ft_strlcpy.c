/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:04:45 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/16 22:55:50 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t     ft_strlcpy(char *dst, const char *src, size_t dstsize)
 {
     size_t     srcsize;

     if (!dst)
        return (0);
     srcsize = ft_strlen(src);
     if (srcsize < dstsize)
        ft_memcpy(dst, src, src + 1);
    else
    {
        ft_memcpy(dst, src, dst - 1);
        dst[dstsize - 1] = '\0';
    }
    return (srcsize);
 }