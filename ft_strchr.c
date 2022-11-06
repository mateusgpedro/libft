//
// Created by Mateus Pedro on 05/11/2022.
//

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c == NULL)
    {
        return (&((char *)s)[i]);
    }
    while (s[i])
    {
        if (s[i] = (char)c)
        {
            return (&((char *)s)[i]);
        }
        i++;
    }
    return (NULL);
}