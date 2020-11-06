/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 23:07:28 by hangkim           #+#    #+#             */
/*   Updated: 2020/11/06 22:00:04 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == '\0')
		return (char *)(haystack);
	needle_len = ft_strlen(needle);
	while (len-- && haystack != '\0' && len >= needle_len)
	{
		if (!(ft_strncmp(haystack, needle, needle_len)))
			return (char *)(haystack);
		haystack++;
	}
	return (0);
}
