/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 22:40:51 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/20 17:19:57 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;
	char	*result;

	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	slen = ft_strlen(s1);
	while (slen && s1[slen - 1] && ft_strchr(set, s1[slen - 1]) != 0)
		slen--;
	result = (char *)malloc(sizeof(char) * (slen + 1));
    if (!result)
		return (0);
	ft_memcpy(result, s1, slen);
	result[slen] = '\0';
	return (result);
}