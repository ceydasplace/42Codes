/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:38:42 by ceydac            #+#    #+#             */
/*   Updated: 2025/08/30 17:53:44 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int i1;
	unsigned int i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] != 0)
		i1++;
	while (s2[i2] != 0)
		i2++;
	return (i1 - i2);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "selam";
	char	s2[] = "selam123";
	printf("%d", ft_strcmp(s1, s2));
}