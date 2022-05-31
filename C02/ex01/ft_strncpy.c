/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:23:12 by dolvin17          #+#    #+#             */
/*   Updated: 2022/05/31 01:59:27 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncpy(char *dest, const char *source, unsigned int n)
{
	int	i;
	int	buffer;
	int	j;

	i = 0;
	buffer = ft_strlen(source);
	buffer = n - 1;
	while (buffer >= i && source[i] != '\0')
	{
		j = 0;
		dest[i] = source[i];
		i++;
		if (source[i] < dest[i])
		dest[i] = j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	str[]="testeando code";
	char	dst[]="xxxxxxxxxx";

	strncpy(dst, str, 3);
	printf("%s %d\n", dst, ft_strlen(dst));
	ft_strncpy(dst, str, 3);
	printf("%s %d\n", dst, ft_strlen(dst));
	return (0);
}
*/
