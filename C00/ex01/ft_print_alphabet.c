#include <unistd.h>

 void ft_print_alphabet(void)
{
	char a;
	char z;

	a = 97;
	z = 122;
	while (a <= z)
	{
		write(1, &a, 1);
		a++;
	}	
}
int main(void)
{
	ft_print_alphabet();
}
