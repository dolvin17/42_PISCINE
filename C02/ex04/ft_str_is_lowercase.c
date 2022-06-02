/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:18:05 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/31 20:58:39 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;
	char	*str1;
	char	*str2;

	str = "amarvin";
	str1 = "leonardo1";
	str2 = "·$%$·&/·&/";
	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", islowercase(str));
	printf("%d\n", ft_str_lowercase(str1));
	printf("%d\n", islowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", islowercase(str2));
	return (0);
}
*/