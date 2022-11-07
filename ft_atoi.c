//
// Created by Mateus Pedro on 07/11/2022.
//

int ft_atoi(const char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;
    while(*str && *str == ' ' || *str == '\t' || *str == '\n'
            || *str == '\v' || *str == '\f' || *str == '\r')
        str++;
    if (*str == '+' || *str == '-')
    {
        if(*str == '-')
            sign *= -1;
        str++;
    }
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            res = res * 10 + (*str - '0');
        else
            break;
        str++;
    }
    return (res * sign);
}