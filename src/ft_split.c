/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguimar <maguimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:26:07 by maguimar          #+#    #+#             */
/*   Updated: 2022/11/11 16:31:02 by maguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_length(char const *s, char c)
{
	int	size;
	int	pos;

	size = 0;
	pos = 0;
	while (*s && *s == c)
		s++;
	while (s[pos])
	{
		if (!pos)
			size++;
		else if (s[pos - 1] == c && s[pos] != c)
			size++;
		pos++;
	}
	return (size);
}

static int	word_position(char const *str, char c)
{
	int	position;

	position = 0;
	while (str[position] && str[position] != c)
		position++;
	return (position);
}

char	**ft_split(char const *s, char c)
{
	char	**new_strings;
	int		i;
	int		array_size;
	int		limit;

	array_size = words_length(s, c);
	new_strings = malloc(sizeof(char *) * (array_size + 1));
	if (!new_strings)
		return (NULL);
	i = 0;
	while (i < array_size)
	{
		while (*s && *s == c)
			s++;
		limit = word_position(s, c);
		new_strings[i] = ft_substr(s, 0, limit);
		s += limit + 1;
		i++;
	}
	new_strings[array_size] = NULL;
	return (new_strings);
}
