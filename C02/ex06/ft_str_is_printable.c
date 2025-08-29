/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:20:51 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/29 19:46:23 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "1\a 27\\del";
	char	str1[] = "";

	ft_str_is_printable(str);
	ft_str_is_printable(str1);
	printf("%d\n", ft_str_is_printable(str));
	printf("%d", ft_str_is_printable(str1));
}