/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:55:23 by ceydac            #+#    #+#             */
/*   Updated: 2025/08/30 18:19:48 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int a;

	a = 0;
	i = 0;
	while (i < n && s1[i] != 0)
		i++;
	while (a < n && s2[a] != 0)
		a++;
	return (i - a);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "selam";
	char	s2[] = "selamlar";
	int	i = 8;
	
	printf("%d", ft_strncmp(s1, s2, i));
}