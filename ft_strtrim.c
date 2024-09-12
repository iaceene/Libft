#include "libft.h"


/// 123yassine123

static int ft_spliter(char c, const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(c == str[i])
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int len;
    int save_index;
    char *trimded_str;

    i = 0;
    len = 0;
    if (!s1 || !set)
        return (NULL);
    while (s1[i] && ft_spliter(s1[i], set))
        i++;
    save_index = i;
    while (s1[i++] && !ft_spliter(s1[i++], set))
        len++;
    i = 0;
    trimded_str = malloc(len + 1);
    if (!trimded_str)
        return (NULL);
    while (s1[save_index] && !ft_spliter(s1[save_index], set))
        trimded_str[i++] = s1[save_index++];
    trimded_str[i] = '\0';
    return (trimded_str);
}