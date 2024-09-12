#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     i;
    int     len;
    char    *dest;
    int     index;

    if (!s1 || !s2)
        return (NULL);
    i = 0;
    index = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    dest = malloc(len + 1);
    if (!dest)
        return (NULL);
    while (s1[i])
        dest[index++] = s1[i++];
    i = 0;
    while (s2[i])
        dest[index++] = s2[i++];
    dest[index] = '\0';
    return (dest);
}
