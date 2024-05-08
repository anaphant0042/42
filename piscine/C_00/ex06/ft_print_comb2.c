/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:58:19 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/01 19:12:24 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b);
void	ft_print_comb2(void);

int main(void)
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 100)
	{
		while (b < 100)
		{
			ft_putchar(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

void	ft_putchar(int a, int b)
{
	char	c;
	char	d;

	c = a / 10 + '0';
	d = a % 10 + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	c = b / 10 + '0';
	d = b % 10 + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
}
