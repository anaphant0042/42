/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:06:24 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/09 13:06:30 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	letter;

	letter = 122;
	while (letter > 96)
	{
		write(1, &letter, 1);
		letter--;
	}
}
/*
int	main (void)
{
	ft_print_reverse_alphabet();
}
*/
