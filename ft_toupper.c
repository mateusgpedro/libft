//
// Created by Mateus Pedro on 05/11/2022.
//

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c += 32;
    return (c);
}