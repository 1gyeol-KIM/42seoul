#include <stdio.h>
#include <stdlib.h>

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
	printf("rownum=%d\n", row_num);
	if (!(row_len = (int *)malloc(sizeof(int) * row_num)))
		return (0);
	cnt_row_len(row_len, (char *)s, c, 1);
	if (!(res = (char **)malloc(sizeof(char *) * (row_num + 1))))
		return (0);
	index = 0;
	while (index < row_num)
	{
		printf("index=%d\n", index);
		res[index] = (char *)malloc(sizeof(char) * (row_len[index] + 1));
		index++;
	}
	split_str(res, (char *)(s), c, 1);
	printf("hi\n");
	return (res);
}

int main()
{
  int i=0;
  int j=0;
  char **res;
  res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
  while (i < 1)
  {
    while (j < 253)
    {
      printf("%c", res[i][j]);
      j++;
    }
    i++;
    printf("\n");
  }
    return 0;
  }
