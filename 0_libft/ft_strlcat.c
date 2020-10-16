/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:31:34 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/16 18:38:23 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      strlcpy(char *dst, const char *src, size_t dstsize);
{
    size_t  i;
	size_t  j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < size - i - 1 && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	while (src[j])
		j++;
	if (size > i)
		return (i + j);
	return (i + size);
}