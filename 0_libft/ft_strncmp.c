/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 12:34:35 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/17 13:41:38 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char *p1;
    unsigned char *p2;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    while (n--)
    {
        if (*p1 != *p2)
            return ((*p1 - *p2));
        if (*p1 =='\0')
            reuturn (0);
        p1++;
        p2++;
    }
    return (0);
}