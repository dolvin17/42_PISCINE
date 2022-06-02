/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 00:20:57 by dolvin17          #+#    #+#             */
/*   Updated: 2022/06/02 15:33:48 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	buffer;

	buffer = dstsize - 1;
	if (dstsize < 1)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < buffer)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = ft_strlen(src);
	return (i);
}
/*
int		main(void)
{
	char	dest[97];
	char	*src;
	int		size;

	src = "Marvin es mi amor";
	size = 40;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n\n", dest);
	printf("%s\n\n", dest);
}*/