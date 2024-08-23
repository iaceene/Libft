#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
    char *d;
    size_t i;

    d = s;
    i = 0;
    while(i < n)
    {
        d[i] = 0;
        i++;
    }
}

int main()
{
    char new[20] = "this is me";
    printf("%s\n", new);
    bzero(new+3, 17);
    printf("%s\n", new);
}