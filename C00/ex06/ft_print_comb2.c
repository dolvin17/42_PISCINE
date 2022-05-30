/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 14:56:20 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 05:35:40 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_source(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_print_source(int n)
{
	if (n <= 9)
	{
		ft_source(0);
		ft_source(n);
	}
	else
	{
		ft_source(n / 10);
		ft_source(n % 10);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_source(i);
			write(1, " ", 1);
			ft_print_source(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
	i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2( );
}*/
