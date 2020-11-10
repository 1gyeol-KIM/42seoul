/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:02:26 by hangkim           #+#    #+#             */
/*   Updated: 2020/11/10 13:24:07 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chk_char(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	if (c == '-' || c == '+')
		return (-1);
	if ('0' <= c && c <= '9')
		return (2);
	return (0);
}

int			ft_atoi(const char *str)
{
	int					i;
	unsigned long long	res;
	int					sign;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_chk_char(str[i]) == 1)
		i++;
	if (ft_chk_char(str[i]) == -1)
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_chk_char(str[i]) == 2)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (res >= LONG_MAX && sign == 1)
		return (-1);
	else if (res > LONG_MAX && sign == -1)
		return (0);
	return (res * sign);
}
