/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:46:52 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/11 16:32:41 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < n && src[i] == '\0')
	{
		while (dst[i] != '\0')
		{
			dst[i] = '\0';
			++i;
		}
	}
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	beginning;
	size_t	end;

	beginning = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[beginning] && ft_strchr(set, s1[beginning]))
		beginning++;
	end = ft_strlen(s1 + beginning);
	if (end)
		while (s1[end + beginning - 1] != 0
			&& ft_strchr(set, s1[end + beginning - 1]) != 0)
			end--;
	new = malloc(sizeof(char) * end + 1);
	if (new == NULL)
		return (NULL);
	ft_strncpy(new, (s1 + beginning), end);
	new[end] = '\0';
	return (new);
}
