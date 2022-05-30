/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:02:25 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 05:29:24 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*str;
	int		i;

	i = 0;
	str = "abcdefghijklmnopqrstuvwxyz";
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}
/*
int	main(void)
{
	ft_print_alphabet();
	return(0);
}*/
