//
// Created by Mateus Pedro on 06/11/2022.
//


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *cs1;
    unsigned char *cs2;
    int i;

    cs1 = (unsigned char *) s1;
    cs2 = (unsigned char *) s2;
    i = 0;
    if (n == 0)
    {
        return (0);
    }
    while (i < n && cs1[i] == cs2[i])
    {
        i++;
    }
    return (cs1[i] - cs2[i]);
}