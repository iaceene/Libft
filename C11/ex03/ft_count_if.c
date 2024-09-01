#include <stdlib.h>
#include <stdio.h>



int ft_count_if(char **tab, int length, int(*f)(char*))
{
    int i;
    int *res;
    int c;

    i = 0;
    c = 0;
    while(tab[i])
    {
        res = f(tab[i]);
        if(*res != 0) c++;
        i++;
    }
    return c;
}