/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:56:13 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/11 16:21:55 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cs;

	i = 0;
	cs = (char *)s;
	while (cs[i])
	{
		if (cs[i] == (char)c)
			return (&((char *)cs)[i]);
		i++;
	}
	if (c == '\0')
	{
		return (&((char *)cs)[i]);
	}
	return (NULL);
}
