#include "lib.h"

int main(int c, char **v) {
    t_list *head = NULL;
    int i = 0;
    if(c >= 2)
        printf("-----> You've enter %d ...\n", atoi(v[1]));
    else
        printf("-----> You've enter %d ...\n", 0);
    if(c >= 2 && atoi(v[1]) >= 1)
    {
        while (i <= atoi(v[1]))
        {
            ft_add_node(&head, i+1);
            i++;
        }
        printf("-----> done adding... !\n");
        ft_print_node(&head);
        printf("-----> freeing... !\n");
        free_node(&head);
    }

    return 0;
}
