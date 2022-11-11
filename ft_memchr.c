/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:56:58 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/11 16:26:14 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;

	cs = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == (unsigned char)c)
			return ((void *)&cs[i]);
		i++;
	}
	return (NULL);
}
