/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:57:23 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 05:31:40 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*revés*/
void	ft_print_reverse_alphabet(void)
{
	char		a;
	char		z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{	
		write(1, &z, 1);
		z--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/