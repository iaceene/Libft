#include "libft.h"
#include <string.h>

int main(int c, char **v)
{
    printf("---> starting ...\n");

    char src[] = "yassine";
    char dst[] = "ajagrou";

    //printf("%ld\n", ft_strlcpy(src, dst, 10));
	//printf("%s\n", dst);
    //printf(" = %s\n", ft_strchr(src, 't' + 256));
	//printf(" = %s\n", strchr(src, 't' + 256));
    printf("%d", ft_isascii(src[1]));


    printf("---> success ...\n");
    return 0;
}