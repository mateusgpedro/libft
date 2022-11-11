/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:32:10 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/11 14:06:23 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *node;

	node = *lst;
	if (!new)
		return (NULL);
	if (!*lst)
	{
		*lst = new;
		return (NULL);
	}
	node = ft_lstlast(node);
	node->next = new;
	return (NULL);
}
