#include <stdio.h>
int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
                ;
        else if (str[i] >= 'a' && str[i] <= 'z')
                ;
        else
            return(0);
        ++i;
    }
    return(1);
}/*
int main(void)
{
    printf("%d\n", ft_str_is_alpha("ABC"));
    printf("%d\n", ft_str_is_alpha("9695"));
    printf("%d\n", ft_str_is_alpha(""));
}*/