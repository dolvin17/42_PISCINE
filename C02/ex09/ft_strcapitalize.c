#include <stdio.h>
int is_alphanumeric(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));

}
int is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}
char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] -= ('A' - 'a');
        i++;
    }
    return(str);
}
char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    ft_strlowcase(str);
    if (is_lower(str[i]))
        str[i] -= 32;
    while (str[i++])
    {
        if (!is_alphanumeric(str[i]) && is_lower(str[i + 1]))
            str[i + 1] -= 32;
    }
    return(str);
}
int main(void)
{
    char    test1[] = "salut, comment tu vas ? 42mots quaRante-deux; cinquante+et+un";
	char	test2[] = "		Hello, 7what &&is/going     ";
    printf("%s\n", ft_strcapitalize(test1));
    printf("%s\n", ft_strcapitalize(test2));
    return (0);
}
