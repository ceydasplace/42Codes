/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:21:10 by ceyda             #+#    #+#             */
/*   Updated: 2025/09/09 17:18:17 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a <= 122)
	{
		write(1, &a, 1);
		a++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}