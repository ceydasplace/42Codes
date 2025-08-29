/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:04:43 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/29 19:49:02 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
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
	char	str[] = "1409";
	char	str1[] = "sel11am";

	ft_str_is_numeric(str);
	ft_str_is_numeric(str1);
	printf("%d\n", ft_str_is_numeric(str));
	printf("%d", ft_str_is_numeric(str1));
}