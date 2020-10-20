/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:21:41 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/20 21:07:28 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int     cnt_row_num(char *s, char c)
{
    int cnt;
    int flag;

    cnt = 0;
    while (*s)
    {
        if (*s == c && !flag)
        {
            cnt++;
            flag = 1;
        }
        else
            flag = 0;
        s++;
    }
    if (!flag)
        cnt++;
    return (cnt);
}

static void    cnt_row_len(int *row_len, char *s, char c)
{
    int cnt;
    int index;
    int flag;

    cnt = 0;
    index = 0;
    while (*s)
    {
        if (*s == c && !flag)
        {
            flag = 1;
            row_len[index++] = cnt;
            cnt = 0;
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

static void    split_str(char **res, char *s, char c)
{
    int     flag;
	int		col;
	int		row;

	col = 0;
	row = 0;
    flag = 0;
	while (*s)
	{
		if (*s == c && !flag)
		{
            flag = 1;
			res[row][col] = '\0';
            row++;
			col = 0;
		}
		else
		{
            flag = 0;
            printf("row=%d col=%d\n", row, col);
            printf("*s=%c\n", *s);
			res[row][col] = *s;
            printf("res[%d][%d]=%c\n", row, col, res[row][col]);
            col++;
		}
		s++;
	}
	if (!flag)
		res[row][col] = '\0';
}

char    **ft_split(char const *s, char c)
{
    int     index;
    int     row_num;
    int     *row_len;
    char    **res;

    row_num = cnt_row_num((char *)s, c);
    if (!(row_len = (int *)malloc(sizeof(int) * row_num)))
        return (0);
    cnt_row_len(row_len, (char *)s, c);
    if (!(res = (char **)malloc(sizeof(char *) * (row_num + 1))))
        return (0);
    index = 0;
    while (index < row_num)
    {
        res[index] = (char *)malloc(sizeof(char) * (row_len[index] + 1));
        index++;
    }
    split_str(res, (char *)(s), c);
    return (res);
}