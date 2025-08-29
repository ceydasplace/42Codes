/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:42:39 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/29 19:45:22 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "selam";
	char	str1[] = "SELam12LAR";

	printf("%s\n", ft_strlowcase(str));
	printf("%s", ft_strlowcase(str1));
}