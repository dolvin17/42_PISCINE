/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:59:48 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 17:14:29 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 666;
	printf("Variable: a = %d b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Pointer: a = %d b = %d\n", a, b);
	return (0);
}*/