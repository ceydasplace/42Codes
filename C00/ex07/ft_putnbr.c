/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:02:50 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/27 18:45:24 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == '0')
        ft_putchar('0');
    if (nb == 2147483647)
    {
        ft_putchar('2');
        nb = 147483647;
    }
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
		ft_putchar(nb + 48);
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}
