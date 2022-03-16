#include <stdio.h>
int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
                ;
        else 
            return(0);
        i++;
    }
    return(1);
}
int main(void)
{
    printf("%d\n", ft_str_is_uppercase("ABC"));
    printf("%d\n", ft_str_is_uppercase("abc"));
    printf("%d\n", ft_str_is_uppercase("123"));
    printf("%d\n", ft_str_is_uppercase(""));
}