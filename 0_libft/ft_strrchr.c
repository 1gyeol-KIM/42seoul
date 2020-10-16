/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 22:58:20 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/16 23:06:27 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *s, int c)
{
    size_t len;
    size_t i;

    len = ft_strlen(s);
    i = 0;
    while (i <= len)
    {
        if (s[len - i] == (char)c)
            return ((char *)&s[len - i]);
        i++;
    }
    return (0);
}