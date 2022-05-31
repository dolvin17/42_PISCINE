/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:16:27 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/30 22:21:51 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *source)
{
	int	i;

	i = 0;
	while (source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	source[50] = "Marvin, mimo y león";
	char	dest[50] = "gatos";

	strcpy(dest, source);
	printf("%s\n", dest);
	ft_strcpy(dest, source);
	printf("%s\n", dest);
	return (0);
}*/