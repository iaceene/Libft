#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     i;
    int     len;
    char    *dest;
    int     index;
    char    *tmp;

    if (!s1 || !s2)
        return (NULL);
    i = 0;
    index = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    tmp = malloc(len + 1);
    if (!tmp)
        return (NULL);
    while (s1[i]) 
        tmp[index++] = s1[i++];
    i = 0;
    while (s2[i]) 
        tmp[index++] = s2[i++];
    dest = ft_strdup((const char *)tmp);
    free(tmp);
    return (dest);
}