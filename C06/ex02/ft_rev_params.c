/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:15:14 by ceydac            #+#    #+#             */
/*   Updated: 2025/09/04 18:25:22 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int	argc, char	**argv)
{
	int	i;
	int	a;
	
	a = argc - 1;
	while (argc > 0)
	{
		if (a == 0)
			return (0);
		i = 0;
		while (argv[a][i] != 0)
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		if (a > 1)
			write(1, "\n", 1);
		a--;
	}
	write(1, "\n", 1);
	return (0);
}
