//
// Created by Mateus Pedro on 11/11/2022.
//

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *node;

    node = *lst;
    *lst = new;
    new->next = node;
}