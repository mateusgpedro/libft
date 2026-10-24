/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:58:54 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/15 13:07:45 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr || !s)
		return (0);
	i = 0;
	while (len > i && *(s + start + i) != '\0' && start < ft_strlen((char *)s))
	{
		ptr[i] = *(s + start + i);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
