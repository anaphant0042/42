/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:12:46 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/14 16:12:49 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		ft_putchar(c);
		c++;
	}
}
