/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceydac <ceydac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:52:06 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/30 15:55:05 by ceydac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != 0)
	{
		if (a == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			a++;
		}
		else if (a > 0 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'Z')
	&& (str[i] < 'a' || str[i] > 'z'))
			a = 0;
		else
			a++;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(str);
	printf("%s", str);
}