/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 16:19:53 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/23 16:41:11 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *ptr;
   
    if (!(ptr = malloc(sizeof(t_list))))
        return (0);
    ptr->content = content;
    ptr->next = 0;
    return (ptr);
}