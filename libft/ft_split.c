/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hangyeol <hangyeol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:11:34 by hangkim           #+#    #+#             */
/*   Updated: 2020/11/24 19:19:57 by hangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_word(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		cnt++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (cnt);
}

static int	cnt_size(char const *s, char c)
{
	int	size;

	size = 0;
	while (*s && *s != c)
	{
		size++;
		s++;
	}
	return (size);
}

static char	**free_array(char **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
	return (0);
}

char		**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		row_size;

	if (!s)
		return (0);
	if (!(res = (char **)malloc(sizeof(char *) * (cnt_word(s, c) + 1))))
		return (0);
	i = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			row_size = cnt_size(s, c);
			if (!(res[i] = (char *)malloc(sizeof(char) * (row_size + 1))))
				return (free_array(res, i - 1));
			ft_strlcpy(res[i++], s, row_size + 1);
			s += row_size;
		}
		else
			s++;
	}
	res[i] = 0;
	return (res);
}
