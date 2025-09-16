/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:06:49 by ceyda             #+#    #+#             */
/*   Updated: 2025/09/10 12:17:33 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempdiv;
	int	tempmod;

	tempdiv = *a / *b;
	tempmod = *a % *b;
	*a = tempdiv;
	*b = tempmod;
}
#include <stdio.h>

int	main(void)
{
	int	a = 27;
	int	b = 5;
	int *x = &a;
	int *y = &b;
	
	
	ft_ultimate_div_mod(x, y);
	printf("%d\n", *x);
	printf("%d\n", *y);
	return(0);
}