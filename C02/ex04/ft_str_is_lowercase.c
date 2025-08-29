/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:11:29 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/29 19:48:12 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
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
	char	str[] = "selam";
	char	str1[] = "sel11am";

	ft_str_is_lowercase(str);
	ft_str_is_lowercase(str1);
	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d", ft_str_is_lowercase(str1));
}