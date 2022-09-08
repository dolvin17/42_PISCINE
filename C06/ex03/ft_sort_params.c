/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:02:38 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/08 19:35:41 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_arg(char const *argv)
{
	int	j;

	j = 0;
	while (argv[j] != '\0')
	{
		write(1, &argv[j], 1);
		++j;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

void	ft_swap(int *a, int *b)
{
	int	aux;

	if (a && b)
	{
		aux = *a;
		*a = *b;
		*b = aux;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	count[argc];

	i = 1;
	while (i < argc)
	{
		count[i] = i;
		++i;
	}
	j = 1;
	while (j < argc)
	{
		k = j;
		while (k < argc)
		{
			if (ft_strcmp(argv[count[j]], argv[count[k]] > 0))
			{
				ft_swap(&count[j], &count[k]);
				++k;
			}
		}
		ft_print_arg(argv[count[j++]]);
	}	
	return (0);
}
