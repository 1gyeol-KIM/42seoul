#include "libft.h"
#include <stdio.h>

int main()
{
  char *pch;
  char str[] = "Example string";
  pch = (char*)ft_memchr(str, 'p', sizeof(str));

  if (pch != NULL)
    printf("'p' found at position %ld.\n", pch - str + 1);
  else
    printf("'p' not found.\n");

  return 0;
    // for(int i = 0; i < (sizeof(a)/sizeof(char)); i++)
    //     printf("%d\n", a[i]);
}