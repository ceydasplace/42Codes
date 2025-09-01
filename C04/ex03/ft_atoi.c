/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:49:14 by ceydac            #+#    #+#             */
/*   Updated: 2025/09/01 13:30:26 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int	i;
	int	sayi;
	int	sign;

	i = 0;
	sayi = 0;
	sign = 1;
	while (str[i] != 0 && (str[i] == '\t' && str[i] == '\r' || str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sayi = (str[i] - 48) + (sayi * 10);
		i++;
	}
	return (sayi * sign);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = " ---+--+1234ab567";
	ft_atoi(str);
	printf("%d", ft_atoi(str));
}
