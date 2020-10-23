/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 16:52:09 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/23 16:56:54 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_lstsize(t_list *lst)
{
    int     len;

    len = 0;
    while (lst)
    {
        lst = lst->next;
        len++;
    }
    return (len);
}