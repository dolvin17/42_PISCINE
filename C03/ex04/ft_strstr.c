/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:58:16 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/03 00:05:58 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (ft_strlen (to_find) == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' )
		{
			if (str[i + j] != to_find[j])
			{
				break ;
			}
		j++;
		}
		if (j == ft_strlen(to_find))
			return (str + i);
	i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] = "perromarvin";
	char to_find [] = "ar";
	printf("%s", ft_strstr(str, to_find));
}
*/
