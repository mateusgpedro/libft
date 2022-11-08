/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:56:02 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/07 14:37:27 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (len == 0)
		return (&((char *)s)[len]);

	while(len > 0)
	{
		if (s[len] == (char)c)
			return (&((char *)s)[len]);
		len--;
	}
	return (NULL);
}
