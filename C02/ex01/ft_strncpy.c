#include <stdio.h>
 char *ft_strncpy(char *dest, char *src, unsigned int n)
 {
    unsigned int    i;

    i = 0;
    while(i < n && src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return(dest);
 }
int	main(void)
{
	char	dest[10]  ="DESTINO";
	char	src[10]  = "FUENTE";

	ft_strncpy(dest, src, 3);
	printf("%s", dest);
	return (0);
}
