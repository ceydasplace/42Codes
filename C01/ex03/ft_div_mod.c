/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:06:42 by ceyda             #+#    #+#             */
/*   Updated: 2025/09/10 12:12:12 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*div = &a;
	int	*mod = &b;

	a = 27;
	b = 5;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
	return (0);
}