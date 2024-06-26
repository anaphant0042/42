/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:36:30 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 17:14:45 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*
void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c < 123)
	{
		ft_putchar(c);
		c++;
	}
}
