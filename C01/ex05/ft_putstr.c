#include <unistd.h>
#include <stdio.h>
void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main(void)
{   
    char str;
    
    ft_putstr("What we do in the shadows");
    printf("%s\n", &str);
    return(0);
}