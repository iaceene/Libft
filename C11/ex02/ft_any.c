#include <stdio.h>

int ft_any(char **tab, int(*f)(char*))
{
    int i;
    int *res;

    i = 0;
    while(tab[i])
    {
        res = f(tab[i]);
        if(*res != 0) return 1;
        i++;
    }
    return 0;
}