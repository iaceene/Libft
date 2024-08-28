#include "libft.h"
#include <string.h>

int main(int c, char **v)
{
    printf("---> starting ...\n");

    char src[] = "yassine";
    char dst[] = "ajagrou";

    printf("%ld\n", ft_strlcpy(src, dst, 10));


    printf("---> success ...\n");
    return 0;
}