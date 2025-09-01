/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:37:37 by ceydac            #+#    #+#             */
/*   Updated: 2025/08/30 19:43:35 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != 0)
	{
		if (to_find[a] == str[i])
			a++;
		i++;
	}
	to_find[a] = 0;
	return (to_find);
}

#include <stdio.h>

int	main(void)
{
	char	to_find[] = "sayarlama";
	char	str[] = "Bilgisayar";
	ft_strstr(str, to_find);

	printf("%s", ft_strstr(str, to_find));
}