/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 20:48:02 by hangkim           #+#    #+#             */
/*   Updated: 2020/11/04 19:42:17 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	slen1;
	size_t	slen2;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (slen1 + slen2 + 1));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, slen1);
	ft_memcpy(&ptr[slen1], s2, slen2);
	ptr[slen1 + slen2] = '\0';
	return (ptr);
}
