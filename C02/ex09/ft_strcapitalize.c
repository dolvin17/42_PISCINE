/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 00:25:51 by dolvin17          #+#    #+#             */
/*   Updated: 2022/06/02 00:10:59 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	j = 0;
	i = 1;
	while (str[i] != '\0')
	{
		if (!((str [j] >= 'a' && str[j] <= 'z')
				|| (str[j] >= 'A' && str[j] <= 'Z')
				|| (str[j] >= '0' && str[j] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
		j++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = " gatito, bonito, paquito42-leonc;:!?$&/()ito";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/