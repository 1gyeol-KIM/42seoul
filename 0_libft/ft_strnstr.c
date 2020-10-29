/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 23:07:28 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/29 21:14:15 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!needle)
		return (char *)(haystack);
	needle_len = ft_strlen(needle);
	while (len-- && haystack != '\0')
	{
		if (ft_strncmp(haystack, needle, needle_len))
			return (char *)(haystack);
		haystack++;
	}
	return (0);
}
