/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:05:10 by ceyda             #+#    #+#             */
/*   Updated: 2025/09/11 18:25:00 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	sol;
	char	sag;

	sol = 0;
	sag = 1;
	while (sol < 99)
	{
		ft_putchar(sol / 10 + '0');
		ft_putchar(sol % 10 + '0');
		ft_putchar(' ');
		ft_putchar(sag / 10 + '0');
		ft_putchar(sag % 10 + '0');
		if (sol < 98)
			write(1, ", ", 2);
		if (++sag > 99)
			sag = ++sol + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
}
