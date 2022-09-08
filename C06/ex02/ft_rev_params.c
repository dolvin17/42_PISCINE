/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:53:49 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/08 18:02:29 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	count = argc -1;
	while (count)
	{
		i = 0;
		while (argv[count][i] != '\0')
		{
			write(1, &argv[count][i], 1);
			i++;
		}
		write(1, "\n", 1);
		count--;
	}
}
