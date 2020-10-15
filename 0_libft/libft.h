/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:21:23 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/15 21:32:03 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct      s_list
{
	void 			*content;
	struct s_list 	*next;
}				 	t_list;

void    *ft_memset(void *ptr, int value, size_t len);
void    ft_bzero(void *s, size_t n);


#endif