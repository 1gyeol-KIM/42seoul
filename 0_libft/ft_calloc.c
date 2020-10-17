/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 15:00:01 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/17 15:27:15 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (!(ptr = malloc(size * count)))
        return (0);
    ft_memset(ptr, 0, size * count)
    return (ptr);
}