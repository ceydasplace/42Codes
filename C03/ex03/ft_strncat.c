/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:30:56 by ceydac            #+#    #+#             */
/*   Updated: 2025/08/30 19:45:57 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != 0)
		i++;
	while (src[a] != 0 && a < nb)
	{
		dest[i] = src[a];
		a++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "lar";
	char	dest[] = "selam";
	int	nb = 3;

	ft_strncat(dest, src, nb);
	printf("%s", dest);
}
