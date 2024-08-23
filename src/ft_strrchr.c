#include <stdlib.h>

static int ft_check_last(char *str, int i, char c)
{
    while (str[i])
    {
        if(str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

char    *ft_strrchr(const char *str, int c)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] == c && ft_check_last((char *)str, i + 1, c))
            return ((char *)str+i);
        i++;
    }
    return (NULL);
}