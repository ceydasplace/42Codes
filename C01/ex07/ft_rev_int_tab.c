/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:07:10 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/29 15:43:04 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_rev_int_tab(int *tab, int size)
{
	int	bas;
	int	son;

	bas = 0;
	son = size - 1;
	while(bas < size / 2)
	{
		ft_swap(&tab[bas], &tab[son]);
		bas++;
		son--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	size = 8;
	int	i;

	i = 0;

	ft_rev_int_tab(tab, size);

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
