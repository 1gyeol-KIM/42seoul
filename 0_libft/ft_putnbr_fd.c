/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 15:26:15 by hangkim           #+#    #+#             */
/*   Updated: 2020/11/04 18:45:38 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n < 0)
	{
		write(fd, "-", 1);
		c = (n % 10) * (-1) + '0';
	}
	else
		c = n % 10 + '0';
	if (n < 10 && n > -10)
	{
		write(fd, &c, 1);
		return ;
	}
	if (n < 0)
		ft_putnbr_fd(-1 * (n / 10), fd);
	else
		ft_putnbr_fd(n / 10, fd);
	write(fd, &c, 1);
	return ;
}
