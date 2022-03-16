#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
                ;
        else
            return(0);
        i++;           
    }
    return(1);
}/*
int main(void)
{
    printf("%d\n", ft_str_is_lowercase("abcd"));
    printf("%d\n", ft_str_is_lowercase("ABC"));
    printf("%d\n", ft_str_is_lowercase("01234"));
    printf("%d\n", ft_str_is_lowercase("    "));
    printf("%d\n", ft_str_is_lowercase(""));
    return(0);
}*/