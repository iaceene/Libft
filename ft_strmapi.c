#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *dest;

    if(!s || !f)
        return NULL;
    i = 0;
    dest = malloc(ft_strlen(s)+1);
    if(!dest)
        return NULL;
    while(s[i])
    {
        dest[i] = f(i, (char)s[i]);
        i++;
    }
    dest[i] = '\0';
    return(dest);
}