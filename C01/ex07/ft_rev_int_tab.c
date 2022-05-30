/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:39:39 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 19:53:15 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = aux;
		i++;
	}
}
/*
int	main(void)
{
	int	size;
	int tab[]={0,1,2,3,4,5};

	size = 6;
	ft_rev_int_tab(tab, size);
	printf("order: %d\n", tab[0]);
	printf("order: %d\n", tab[1]);
	printf("order: %d\n", tab[2]);
	printf("order: %d\n", tab[3]);
	printf("order: %d\n", tab[4]);
	printf("order: %d\n", tab[5]);
	return (0);
}*/