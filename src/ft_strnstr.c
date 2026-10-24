/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:55:44 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/08 16:38:52 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*little))
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && *(big + i) != '\0')
	{
		while (*(big + i + j) == *(little + j)
			&& *(little + j) != '\0' && *(big + i + j) != '\0' && i + j < len)
			j++;
		if (*(little + j) == '\0')
			return ((char *)(big + i));
		j = 0;
		i++;
	}
	return (0);
}
