#include <unistd.h>

 void ft_print_reverse_alphabet(void)
{
	char	z;
	char	a;
	
	z = 122;
	a = 97;
	while (z >= a)
	{	
		write(1, &z, 1);
		z--;
	}
}
int main(void)
{
	ft_print_reverse_alphabet();
}
