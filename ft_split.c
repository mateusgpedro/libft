//
// Created by Mateus Pedro on 09/11/2022.
//

#include "libft.h"

static int  words_length(char const *s, char c)
{
    int i;
    int count;
    while (s[i])
    {
        if(s1[i] == c)
        {
            i++;
            continue;
        }
        count++;
        i++;
    }
    return (count);
}

static int	word_position(char const *str, char c)
{
    int	position;

    position = 0;
    while (str[position] && str[position] != c)
        position++;
    return (position);
}

char **ft_split(char const *s, char c)
{
    char **new_strings;
    int i;
    int array_size;
    int start_pos;

    array_size = words_length(s, c);
    new_strings = malloc(sizeof(char *) * (array_s  ize + 1));
    if (!new_strings)
        return (NULL);
    while (i < array_size)
    {
        while (*s && *s == c)
            s++;
        start_pos = word_position(s, c);
        new_strings[i] = ft_substr(s, 0, );
        s += limit + 1;
        i++;
    }
    new_strings[array_size] = '\0';
    return (new_strings);
}