/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karol <grks_17@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:06:24 by Karol             #+#    #+#             */
/*   Updated: 2022/03/13 03:19:20 by Karol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
 
 void ft_putchar(char c)
 {
     write(1, &c, 1);
 }

 void ft_putnbr(int nb)
{  
  
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nb < 0)
    {
        write(1, "-", 1);
        nb = -1 * nb;
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }

}   
int main(void)
{ 
	ft_putnbr(42);
	return (0);
}
