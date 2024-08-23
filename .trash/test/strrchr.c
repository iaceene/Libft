#include <stdio.h>
#include <string.h>

static int ft_check_last(char *str, int i, char c)
{
    while (str[i])
    {
        if(str[i] == c)
            return 0;
        i++;
    }
    return 1;
}

char *ft_strrchr(const char *str, int c)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] == c && ft_check_last((char *)str, i + 1, c))
            return ((char *)str+i);
        i++;
    }
    return (NULL);
}


int main () {
   int len;
   char str[] = "yas.sine.ewew.yassine<3";
   char ch = '.';
   char *ret;
   char *re1;

   ret = ft_strrchr(str, ch);
   re1 = strrchr(str, ch);

   printf("%s\n", ret);
   printf("%s\n", re1);
   
   return(0);
}