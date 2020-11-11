/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:11:34 by hangkim           #+#    #+#             */
/*   Updated: 2020/11/04 20:48:47 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_row_num(char *s, char c)
{
	int cnt;
	int flag;

	cnt = 0;
	flag = 1;
	while (*s)
	{
		if (*s == c)
		{
			if (!flag)
			{
				cnt++;
				flag = 1;
			}
		}
		else
			flag = 0;
		s++;
	}
	if (!flag)
		cnt++;
	return (cnt);
}

static void	cnt_row_len(int *row_len, char *s, char c, int flag)
{
	int cnt;
	int index;

	cnt = 0;
	index = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (!flag)
			{
				flag = 1;
				row_len[index++] = cnt;
				cnt = 0;
			}
		}
		else
		{
			flag = 0;
			cnt++;
		}
		s++;
	}
	if (!flag)
		row_len[index] = cnt;
}

static void	split_str(char **res, char *s, char c, int flag)
{
	int		col;
	int		row;

	col = 0;
	row = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (!flag)
			{
				flag = 1;
				res[row++][col] = '\0';
				col = 0;
			}
		}
		else
		{
			flag = 0;
			res[row][col++] = *s;
		}
		s++;
	}
	if (!flag)
		res[row][col] = '\0';
}

char		**ft_split(char const *s, char c)
{
	int		index;
	int		row_num;
	int		*row_len;
	char	**res;

	row_num = cnt_row_num((char *)s, c);
	if (!(row_len = (int *)malloc(sizeof(int) * row_num)))
		return (0);
	cnt_row_len(row_len, (char *)s, c, 1);
	if (!(res = (char **)malloc(sizeof(char *) * (row_num + 1))))
		return (0);
	index = 0;
	while (index < row_num)
	{
		res[index] = (char *)malloc(sizeof(char) * (row_len[index] + 1));
		index++;
	}
	split_str(res, (char *)(s), c, 1);
	res[index] = 0;
	return (res);
}