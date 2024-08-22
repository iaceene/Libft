#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    char *d = s;
    while(i < n)
    {
        *d = c;
        d++;
        i++;
    }
    return s;
}

int main()
{
    int a = 11;

    char *bytePtr = (char *)&a;
    //ft_memset(b, 'b', 5);


    memset(bytePtr, 9, 1);   /// byte 1
    memset(bytePtr+1, 3, 1); /// byte 2
    memset(bytePtr+2, 5, 1); /// byte 3
    memset(bytePtr+3, 0, 1); /// byte 4


   // ft_memset(b+5, 'c', 5);
    /*
    int i = 0;
    while(i < 10)
        printf("%c ", a[i++]);
    printf("\n");

    i = 0;
    while(i < 10)
        printf("%c ", b[i++]);
    */
    printf("%d", a);
    printf("\n");
    return 0;
}