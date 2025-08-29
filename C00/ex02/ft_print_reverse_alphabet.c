/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyda <ceyda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:37:02 by ceyda             #+#    #+#             */
/*   Updated: 2025/08/25 16:38:23 by ceyda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char z;

    z = 122;
    while(z >= 97)
    {
        write(1, &z, 1);
        z--;
    }
}
int main(void)
{
   ft_print_reverse_alphabet(); 
}