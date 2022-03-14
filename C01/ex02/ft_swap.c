#include <stdio.h>
void    ft_swap(int *a, int *b)
{
    int x;

    x = *a;
    *a = *b;
    *b = x;
}
int main(void)
{
    int a;
    int b;

    a = 42;
    b = 90;
    printf("before: a=%d b=%d\n", a, b);
    ft_swap(&a, &b);
    printf("after: a=%d b=%d\n", a, b);
    return(0);
}