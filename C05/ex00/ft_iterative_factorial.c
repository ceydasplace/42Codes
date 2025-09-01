/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:26:19 by ceydac            #+#    #+#             */
/*   Updated: 2025/09/01 18:44:19 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int	sayi;

	sayi = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		sayi *= nb;
		nb--;
	}
	return (sayi);
}

#include <stdio.h>

int	main(void)
{
	int nb = 4;
	printf("%d", ft_iterative_factorial(nb));
}