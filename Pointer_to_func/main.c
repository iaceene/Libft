#include <stdio.h>

void func(void (*zb)(char *), char *name)
{
    zb(name);
}

void print_name(char *name)
{
    printf("hi %s\n", name);
}

int main(int c, char **v)
{
    if(c <= 1)
        v[1] = "wld l97ba";
    void (*p)(char *) = print_name;
    func(p, v[1]);
    return 0;
}