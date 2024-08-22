#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    int j = 69;

    memset(a, j, 5);
    memset(a+5, j+3, 5);

    int i = 0;
    while(i < 10)
        printf("%c", a[i++]);

    printf("\n");
    return 0;
}