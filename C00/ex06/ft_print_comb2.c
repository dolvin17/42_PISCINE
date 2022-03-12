#include <unistd.h>

void	show(int x);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j < 100)
		{
			show(i);
			write(1, " ", 1);
			show(j);
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
	i++;
	}
}

void	show(int x)
{
	int	n1;
	int	n2;

	if (x > 9)
	{
		n1 = x / 10;
		n2 = x % 10;
		print(n1);
		print(n2);
	}
	else
	{
		print(0);
		print(x);
	}
}
int main(void)
{
    ft_print_comb2 ();

}