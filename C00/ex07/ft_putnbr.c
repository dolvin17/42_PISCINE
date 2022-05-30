/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:30:59 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 05:36:12 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_printchar(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write (1, "-2147483648", 12);
	}
	if ((n < 0) && (n != -2147483648))
	{
		n = n * -1;
		write(1, "-", 1);
	}
	if (n <= 9 && n >= 0)
	{
		ft_printchar(n);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");

	ft_putnbr(0);
}*/