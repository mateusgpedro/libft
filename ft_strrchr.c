//
// Created by Mateus Pedro on 05/11/2022.
//

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen(s);
    if  (len == 0)
        return (&((char *)s)[len]);

    while(len > 0)
    {
        if (s[len] == (char)c)
            return (&((char *)s)[len]);
        len--;
    }
}