#include "libft.h"
#include <stdio.h>

int main()
{
  char *pch;
  char str1[] = "abccab";
  char str2[] = "ab";
  pch = ft_strtrim(str1, str2);
  printf("%lu\n", sizeof(pch));
  printf("pch=%s\n", pch);
  for(int i = 0; i < (sizeof(pch)/sizeof(char)); i++)
    printf("%c\n", pch[i]);
}