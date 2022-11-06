//
// Created by Mateus Pedro on 05/11/2022.
//

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c -= 32;
    return (c);
}