/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:11:55 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/09 13:11:57 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nmbrs(int a, int b);

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
			ft_print_nmbrs(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

void	ft_print_nmbrs(int a, int b)
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

/*
int main(void)
{
	ft_print_comb2();
}
*/
