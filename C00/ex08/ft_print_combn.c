/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:12:21 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 05:36:44 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* This function prints all combinations of numbers,
without repeat, from zer0 to 99 */
void	ft_print_combn(int n)
{
	char	j;
	char	k;

	if (n == 2)
	j = '0';
	while (j <= '8')
	{
		k = j + 1;
		while (k <= '9')
		{
			write(1, &j, 1);
			write(1, &k, 1);
			if (!(j == '8' && k == '9'))
				write(1, ", ", 2);
			k++;
		}
	j++;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
