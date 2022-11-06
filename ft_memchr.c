//
// Created by Mateus Pedro on 06/11/2022.
//

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *cs;

    sc = (unsigned char *) s;
    i = 0;
    while (i < n)
    {
        if (cs[i] == (unsigned char)c)
            return ((void*)&big[i]);
        i++;
    }
    reurn (NULL);
}