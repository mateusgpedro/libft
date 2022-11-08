/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:05:27 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/08 16:38:30 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;
	size_t	res;
	size_t	n;

	if ((dest == NULL) && (dest_size == 0))
		return (0);
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (dest_size < len_dest)
		return (ft_strlen(src) + dest_size);
	i = 0;
	n = dest_size - len_dest;
	res = len_dest + len_src;
	while (((i + 1) < n) && (*(src + i) != '\0'))
	{
		*(dest + (len_dest + i)) = *(src + i);
		i++;
	}
	(*(dest + (len_dest + i)) = '\0');
	return (res);
}
