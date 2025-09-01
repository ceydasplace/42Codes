/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:20:28 by ceydac            #+#    #+#             */
/*   Updated: 2025/08/30 19:34:20 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	while (dest[i] != 0)
		i++;
	while (src[a] != 0)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = 0;
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[] = "selam";
	char	src[] = "lar";

	ft_strcat(dest, src);
	printf("%s", dest);
}
