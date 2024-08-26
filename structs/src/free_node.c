#include "lib.h"


void free_node(t_list **head)
{
    t_list *tmp = *head;
    t_list *next_node;


    while(tmp)
    {
        next_node = tmp -> next;
        free(tmp);
        tmp = next_node;
    }
    *head = NULL;
}