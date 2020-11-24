/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:31:34 by hangkim           #+#    #+#             */
/*   Updated: 2020/11/06 20:10:32 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	flag;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	flag = 0;
	while (src[i] && dlen + i + 1 < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
		flag = 1;
	}
	if (flag)
		dst[dlen + i] = '\0';
	if (dlen < dstsize)
		return (slen + dlen);
	return (slen + dstsize);
}
