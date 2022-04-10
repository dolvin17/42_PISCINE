/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:24:56 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/03 11:45:45 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%d\n", ft_strlen("Clarkent"));
	printf("%d\n", ft_strlen("Hello"));
	printf("%d\n", ft_strlen("-1"));
	printf("%d\n", ft_strlen("Marvin"));
	return (0);
}*/
