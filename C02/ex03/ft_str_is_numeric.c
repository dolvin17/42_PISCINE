/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 05:21:56 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/31 06:10:59 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;
	int	n2;

	n = 0;
	n2 = 9;
	while (str[n])
	{
		if (str[n] >= '0' && str[n] <= '9')
			;
		else
			return (0);
		n++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;

	str = "0123456789";

	ft_str_is_numeric(str);
}*/