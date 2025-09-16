/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 17:13:56 by ceyda             #+#    #+#             */
/*   Updated: 2025/09/11 10:59:11 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "cekyate";
	char	dest[20] = "bayda";
	int	n = 3;

	printf("%s", ft_strncpy(dest, src, n));
}
