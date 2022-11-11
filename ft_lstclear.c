/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:07:28 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/11 16:24:50 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	node = *lst;
	if (!*lst)
		return ;
	while (node)
	{
		node = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = node;
	}
	*lst = NULL;
}
