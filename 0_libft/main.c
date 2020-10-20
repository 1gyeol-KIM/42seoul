#include "libft.h"
#include <stdio.h>

int main()
{
  char **pch;
  char str1[] = "aa*bb*cc";
  pch = ft_split(str1, '*');
  printf("pch[0][0] = %c\n", pch[0][0]);
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
      printf("pch[%d][%d]=%c ",i, j, pch[i][j]);
    printf("\n");
  }
  return (0);
}