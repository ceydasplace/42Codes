/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:07:00 by ceyda             #+#    #+#             */
/*   Updated: 2025/09/10 12:44:06 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	sayi;

	sayi = 0;
	while (str[sayi] != 0)
	{
		sayi++;
	}
	return (sayi);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "ceyda";
	printf("%d", ft_strlen(str));
}
