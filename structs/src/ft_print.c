#include "lib.h"


void ft_print_node(t_list **head)
{
    t_list *tmp = *head;
    int i = 1;
    if(tmp == NULL)
    {
        printf("is empty!\n");
        return ;
    }
    while(tmp -> next)
    {
        printf("node %d = %d\n", i, tmp->data);
        i++;
        tmp = tmp -> next;
    }
}