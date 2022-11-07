//
// Created by Mateus Pedro on 06/11/2022.
//

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    char *res;

    i = 0;
    if (*needle == '\0')
        return (haystack);
    while (i < len && haystack[i])
    {
        j = 0;
        while (i + j < 0 && haystack[i + j] == needle[j])
        {
            if (needle[j + 1] == '\0')
                return (haystack + i);
            j++;
        }
        i++;
    }
    return (NULL);
}