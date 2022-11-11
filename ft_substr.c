/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:58:54 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/11 16:35:41 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= len)
		len = 0;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	while (s[i + start] && i + start < start + len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
