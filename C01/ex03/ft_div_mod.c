/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karol <grks_17@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:55:34 by Karol             #+#    #+#             */
/*   Updated: 2022/03/14 21:43:23 by Karol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 144;
    b = 12;
    ft_div_mod(a, b, &div, &mod);
    printf("div:%d\nmod:%d\n", div, mod);
    return(0);
}