/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:03:14 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/28 13:10:01 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 21;

	ft_swap(&a, &b);
	printf("before a = 42 | after a = %d\n", a);
	printf("before b = 21 | after b = %d\n", b);
}