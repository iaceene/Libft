#include "libft.h"

char *ft_strdup(const char *s)
{
    int     i;
    int     len;
    char    *dest;

    len = ft_strlen(s);
    i = 0;
    dest = malloc(len + 1);
    if (!dest)
        return (NULL);
    while(s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}