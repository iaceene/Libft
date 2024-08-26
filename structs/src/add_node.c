#include "lib.h"

void ft_add_node(t_list **head, int nbr)
{
    t_list *new_node = malloc(sizeof(t_list));
    t_list *tmp;

    tmp = *head;
    if(*head == NULL)
    {
        *head = new_node;
        new_node -> data = nbr;
        new_node -> next = NULL;
        return ;
    }
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
    new_node -> data = nbr;
    new_node -> next = NULL;
}
