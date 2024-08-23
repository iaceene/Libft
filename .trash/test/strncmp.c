#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t  i;
    
    i = 0;
    while (str1[i] && str2[i] && i < n)
    {
        if(str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

int main()
{
    char s1[20] = "yassine";
    char s2[20] = "y1asseine";
    int i = strncmp(s2, NULL, 2);
    //int j = ft_strncmp(NULL, s1, 2);
    printf("%d\n", i);
    //printf("%d\n", j);
    return 0;
}
