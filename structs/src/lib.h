#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



typedef struct s_list
{
    int data;
    struct s_list *next; 
}t_list;

void ft_add_node(t_list **head, int nbr);
void ft_print_node(t_list **head);
void free_node(t_list **head);

#endif