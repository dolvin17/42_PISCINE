/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:26:02 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 17:38:41 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*b = y;
	*a = x;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	a;
	int	b;

	a = 144;
	b = 12;
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d\n", a);
	printf("mod: %d", b);
	return (0);
}*/
