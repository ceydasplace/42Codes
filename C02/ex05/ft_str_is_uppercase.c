/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:15:09 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/29 19:47:21 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Ceyda";
	char	str1[] = "ASKIM";

	ft_str_is_uppercase(str);
	ft_str_is_uppercase(str1);
	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d", ft_str_is_uppercase(str1));
}