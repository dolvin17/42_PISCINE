#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size < 1)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	i = ft_strlen(src);
	return (i);
}
/*
int main()
{
    char    src[] = "MARVIN";
    char    dest[] = "ESMIAMOR";
    unsigned int    size = 3;
    printf("%i\n", ft_strlcpy(dest, src, size));
    return (0);
}*/