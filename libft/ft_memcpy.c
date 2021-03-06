/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 21:37:38 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/29 21:16:04 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	unsigned char *d;
	unsigned char *s;

	if (!(dst || src))
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (num--)
		*d++ = *s++;
	return (dst);
}
