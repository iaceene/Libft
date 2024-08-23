#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest_str, const void * src_str, size_t n)
{
    size_t  i;
    char *dest;
    const char *src;

    i = 0;
    dest = dest_str;
    src = src_str;
    if (!dest_str || !src_str)
        return (NULL);
    while(i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return dest_str;
}

int main()
{
    char *src = "yassine ajagrou";
    char dest[10];

    ft_memcpy(dest, src+3, 3);
    printf("%s\n", dest);
    return 0;
}