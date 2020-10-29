/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:02:26 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/29 19:04:28 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_chk_char(char c)
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

int		ft_atoi(const char *str)
{
	int		i;
	int		res;
    int     sign;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_chk_char(str[i]) == 1)
		i++;
	if (ft_chk_char(str[i]) == -1)
    {
        if (str[i] == '-')
            sign = -1;
    }
	while (ft_chk_char(str[i]) == 2)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}