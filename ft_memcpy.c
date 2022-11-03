/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:36:56 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/03 14:13:54 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t index;

	if ((dest == NULL) && (src == NULL))
	{
		return NULL;
	}

	index = 0;
	while(((unsigned char *)src)[index] || index < n)
	{
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
	}
	return (dest);
}
