#include <stdio.h>
int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
                ;
        else
                return(0);
        i++;
    }
    return(1);
}/*
int main(void)
{
    printf("%d\n", ft_str_is_numeric("123213"));
    printf("%d\n", ft_str_is_numeric("abcf"));
    printf("%d\n", ft_str_is_numeric(""));
    return(0);
}/*