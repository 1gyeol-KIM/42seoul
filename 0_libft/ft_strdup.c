/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 15:14:07 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/17 15:38:12 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strdup(const char *s1)
{
    char    *ptr;
    size_t  len;

    len = ft_strlen(s1)
    if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))
        return (0);
    ft_strlcpy(ptr, s1, len + 1);
    return (ptr);
}