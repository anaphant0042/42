/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:01:07 by alara-gu          #+#    #+#             */
/*   Updated: 2024/03/22 14:29:43 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
}


void ft_print_alphabet(void)
{
	int letter = 48;
	while (letter < 58)
	{
		char c = letter;
		write(1, &c, 1);
		letter++;
	}
}
