//
// Created by Mateus Pedro on 11/11/2022.
//

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst)
    {
        while (lst->next)
            lst = lst->next;
    }
    else
        return (NULL);
    return (lst);
}