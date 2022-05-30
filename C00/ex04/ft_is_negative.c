/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:40:58 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 05:33:45 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* Print P if n is positive, 
N if n is negative*/
void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	if (n < 0)
		write(1, "N", 1);
}
/*
int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(2);
}*/