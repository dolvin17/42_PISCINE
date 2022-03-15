#include <stdio.h>
void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;

    i = 0;
    while(i < size / 2)
    {
         temp = tab[i];
         tab[i] = tab[size - i - 1];
         tab[size - i - 1] = temp;
         i++;
    }
}
int main(void)
{
    int tab[]={0,1,2,3,4};

    printf("before: %d\n", tab[0]);
    printf("before: %d\n", tab[1]);
    printf("before: %d\n", tab[2]);
    printf("before: %d\n", tab[3]);
    printf("before: %d\n", tab[4]);
    ft_rev_int_tab(tab, 5);
    printf("after: %d\n", tab[0]);
    printf("after: %d\n", tab[1]);
    printf("after: %d\n", tab[2]);
    printf("after: %d\n", tab[3]);
    printf("after: %d\n", tab[4]);

    return (0);
}