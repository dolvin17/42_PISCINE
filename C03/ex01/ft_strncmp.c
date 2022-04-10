/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:11:15 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/02 08:46:57 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main ()
{
	char str1[] = "hola";
	char str2[] = "huerto";
	
	ft_strncmp(str1, str2, 4);
	printf("%d\n", ft_strncmp("hola", "adios", 4));
	printf("%d\n", ft_strncmp("hola", "hola", 4));
	printf("%d\n", ft_strncmp("alo", "zapa", 4));
}
*/	
