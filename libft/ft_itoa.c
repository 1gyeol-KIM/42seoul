/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 15:23:21 by hangkim           #+#    #+#             */
/*   Updated: 2020/11/10 13:20:44 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_nlen(unsigned int n)
{
	int cnt;

	cnt = 0;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static void	get_str(char *res, unsigned int n, int len)
{
	char	c;

	c = n % 10 + '0';
	if (n < 10)
	{
		*(res + len) = c;
		return ;
	}
	get_str(res, n / 10, len - 1);
	*(res + len) = c;
	return ;
}

char		*ft_itoa(int n)
{
	int		len;
	char	*res;

	if (n > 0)
		len = cnt_nlen(n);
	else
		len = cnt_nlen(-n) + 1;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (n >= 0)
		get_str(res, n, len - 1);
	else
	{
		get_str(res, -n, len - 1);
		*res = '-';
	}
	res[len] = '\0';
	return (res);
}
