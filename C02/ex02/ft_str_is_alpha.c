/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 17:45:17 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/29 19:02:21 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "selam";
	char	str1[] = "sel11am";

	ft_str_is_alpha(str);
	ft_str_is_alpha(str1);
	printf("%d\n", ft_str_is_alpha(str));
	printf("%d", ft_str_is_alpha(str1));
}