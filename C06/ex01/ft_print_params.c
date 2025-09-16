/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:02:46 by ceydac            #+#    #+#             */
/*   Updated: 2025/09/04 18:14:37 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int	argc, char	**argv)
{
	int	i;
	int	a;
	
	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i] != 0)
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		if (a < argc - 1)
			write(1, "\n", 1);
		a++;
	}
	write(1, "\n", 1);
	return (0);
}
