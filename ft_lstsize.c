//
// Created by Mateus Pedro on 11/11/2022.
//

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
