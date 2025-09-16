/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:19:17 by ceydac            #+#    #+#             */
/*   Updated: 2025/09/02 17:35:14 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int	i;
	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			i = 2;
			nb++;
		}
		i++;
	}
	return (nb);

}
#include <stdio.h>

int main(void)
{
	int nb;
	nb = 30;
	printf("%d", ft_find_next_prime(nb));
}