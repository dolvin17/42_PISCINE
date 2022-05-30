/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:17:34 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 05:32:28 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* print digits*/
void	ft_print_numbers(void)
{
	char	n;
	char	x;

	x = '9';
	n = '0';
	while (n <= x)
	{
		write(1, &n, 1);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/