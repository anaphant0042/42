/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:01:07 by alara-gu          #+#    #+#             */
/*   Updated: 2024/03/21 18:35:08 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	int letter = 122;
	while (letter > 96)
	{
		write(1, &letter, 1);
		letter--;
	}
}
int	main(void)
{
	ft_print_reverse_alphabet();
}
