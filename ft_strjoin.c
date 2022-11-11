/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:49:41 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/11 16:17:51 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_string = (char *)malloc(sizeof(char) * (s2_len + s1_len + 1));
	if (!new_string)
		return (NULL);
	ft_memcpy(new_string, s1, s1_len);
	ft_memcpy(new_string + s1_len, s2, s2_len + 1);
	return (new_string);
}
