/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangkim <hangkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:21:41 by hangkim           #+#    #+#             */
/*   Updated: 2020/10/20 19:04:30 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     cnt_row_num(char *s, char c)
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

void    cnt_row_len(int *row_len, char *s, char c, int row_num)
{
    int cnt;
    int index;

    cnt = 0;
    index = 0;
    while (index < row_num)
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

void    split_str(char **res, char *s, char c)
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
			res[row++][col] = '\0';
			col = 0;
			chk = 0;
		}
		else
		{
            flag = 0;
			res[row][col++] = *s;
		}
		s++;
	}
	if (!flag)
		res[row++][col] = '\0';
}

char    **ft_split(char const *s, char c)
{
    int     index;
    int     row_num;
    int     *row_len;
    char    **res;

    row_num = cnt_row_num(s, c);
    if (!(row_len = (int *)malloc(sizeof(int) * cnt_row))
        return (0);
    cnt_row_len(row_len s, c, row_num);
    if (!(res = (char **)malloc(sizeof(char) * row_num)))
        return (0);
    while (index < row_num)
    {
        res[index] = (char *)malloc(sizeof(char) * (row_len[index] + 1);
        index++;
    }

}