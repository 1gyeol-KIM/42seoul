/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:31:34 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/16 22:55:28 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dlen;
	size_t  slen;
	size_t 	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	while (src[i] && dlen + i + 1 < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	if (dlen < dstsize)
		return (slen + dlen);
	return (slen + dstsize);
}