/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:03:25 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/11 16:22:25 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*new_string;

	i = 0;
	len = ft_strlen(s);
	new_string = malloc(sizeof(char) * (len + 1));
	if (!new_string)
		return (NULL);
	while (i < len)
	{
		new_string[i] = (*f)(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
