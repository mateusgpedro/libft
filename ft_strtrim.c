#include "libft.h"

static char *strncpy(char *dst, *src, int n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    if (i < n && src[i] == '\0')
    {
        while (dest[i] != '\0')
        {
            dest[i] = '\0';
            ++i;
        }
    }
    return (dest);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t beginning;
    size_t end;

    if (!s1 || !set)
        return (NULL);
    while (s1[beginning] && ft_strchr(set, s1[beginning]))
        beginning++;
    end = ft_strlen(s1 + beginning);
    if (end)
        while (s1[end + beg - 1] != 0 && ft_strchr(set, s1[end + beg - 1]) != 0)
            end--;
    new = malloc(sizeof(char) * end + 1);
    if (new == NULL)
        return (NULL);
    ncpy(new, (s1 + beg), end);
    new[end] = '\0';
    return (new);
}