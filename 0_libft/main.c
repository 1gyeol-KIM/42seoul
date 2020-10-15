#include "libft.h"
#include <stdio.h>

int main()
{
    char a[20];

    ft_bzero(a, sizeof(a));
    for(int i = 0; i < (sizeof(a)/sizeof(char)); i++)
        printf("%d\n", a[i]);
}