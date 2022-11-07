/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:55:44 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/07 14:19:47 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*needle == '\0')
		return ((char *)(haystack));
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < 0 && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char*)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
