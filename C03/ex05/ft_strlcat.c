/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:49:37 by ceydac            #+#    #+#             */
/*   Updated: 2025/08/30 20:00:08 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int a;

	i = 0;
	a = 0;

	while (dest[i] != 0)
		i++;
	while (src[a] != 0 && i < size - 1)
	{
		dest[i] = src[a];
		a++;
		i++;
		if(src[i] == size)
			dest[i] = 0;
	}
	dest[i] = 0;
	return (size);
}

#include <stdio.h>

int	main(void)
{
	char	dest[25] = "Bilgisayar";
	char	src[] = " Mühendisligi";
	int	size = 25;

	ft_strlcat(dest, src, size);
	printf("%s", dest);
}