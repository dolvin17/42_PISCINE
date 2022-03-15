#include <stdio.h>
void    ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i;
    int j;

    i = 0;
    while(i < size)
    {
        j = i + 1;
        while(j < size)
        {
            if(tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
                i = 0;
            }
        ++j;    
        }
    i++;
    }
}
int main(void)
{
    int tab[]={4,0,3,1,2};

    printf("before: %d\n", tab[0]);
    printf("before: %d\n", tab[1]);
    printf("before: %d\n", tab[2]);
    printf("before: %d\n", tab[3]);
    printf("before: %d\n", tab[4]);
    ft_sort_int_tab(tab, 5);
    printf("after: %d\n", tab[0]);
    printf("after: %d\n", tab[1]);
    printf("after: %d\n", tab[2]);
    printf("after: %d\n", tab[3]);
    printf("after: %d\n", tab[4]);

    return (0);
}