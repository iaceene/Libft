#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *dst;
    
    if (!s)
        return (NULL);
    i = 0;
    dst = malloc(len + 1);
    if (!dst)
        return (NULL);
    else if (start > ft_strlen(s))
    {
        free(dst);
        return (NULL);
    }  
    while(s[start] && i < len)
    {
        dst[i] = s[start];
        start++;
        i++;
    }
    dst[i] = '\0';
    return (dst);
}