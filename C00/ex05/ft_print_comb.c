#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				write (1, &i, 1);
				write (1, &j, 1);
				write (1, &k, 1);
				if (!(i == '7' && j == '8' && k == '9'))
					write (1, ", ", 2);
			k++;
			}
		++j;
		}
	++i;
	}
}	
int main(void)
{
	ft_print_comb();
	return (0);
}
