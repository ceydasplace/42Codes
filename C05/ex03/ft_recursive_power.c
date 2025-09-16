/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:56:31 by ceydac            #+#    #+#             */
/*   Updated: 2025/09/02 15:03:30 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power-1));
	return (nb);
}
#include <stdio.h>
int main(void)
{
	int nb;
	int power;
	nb = 5;
	power = 4;
	printf("%d", ft_recursive_power(nb, power));
}
