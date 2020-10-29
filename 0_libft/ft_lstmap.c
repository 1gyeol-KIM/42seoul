/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 18:37:16 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/29 21:08:09 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	if (!(res = ft_lstnew(f(lst->content))))
		return (0);
	tmp = res;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp->next = ft_lstnew(f(lst->next))))
		{
			ft_lstclear(&res, del);
			return (0);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
