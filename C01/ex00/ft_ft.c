#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}
int main(void)
{
    int i;
    int *nbr;

    i = 5;
    nbr = &i;

    printf("variable: %d\n", i);
    ft_ft(nbr);
    printf("pointer: %d\n", i);
    return(0);
}