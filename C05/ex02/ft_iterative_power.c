/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:03:29 by ceydac            #+#    #+#             */
/*   Updated: 2025/09/02 14:54:44 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int sayi;
	sayi = 1;
	if(nb == 0 && power == 0)
		return (1);
	if(power < 0)
		return (0);
	while(power >= 1)
	{
		sayi *= nb;
		power--;
	}
	return (sayi);
}
#include <stdio.h>
int main(void)
{
	int nb;
	int power;
	nb = 6;
	power = 3;
	printf("%d", ft_iterative_power(nb, power));
}
