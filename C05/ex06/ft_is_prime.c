/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:09:19 by ceydac            #+#    #+#             */
/*   Updated: 2025/09/02 17:17:51 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>

int main(void)
{
	int nb;
	nb = 37;
	printf("%d", ft_is_prime(nb));
}

