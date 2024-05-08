/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:31:26 by alara-gu          #+#    #+#             */
/*   Updated: 2024/03/26 16:12:09 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int x, int y);
void	ft_print_comb2(void);

/*int	main(void)
{
	ft_print_comb2();
}*/

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					ft_putchar(a, b, c, d);
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = 0;
		c = a;
		d = b + 1;
	}
}

void	ft_putchar(int a, int b, int c, int d)
{
	char	w;
	char	x;
	char	y;
	char	z;

	w = a + '0';
	x = b + '0';
	y = c + '0';
	z = d + '0';
	write(1, &w, 1);
	write(1, &x, 1);
	write(1, " ", 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (a == 9 && b == 8 && c == 9 && d == 9)
	{
		write (1, "\n", 1);
	}
	else
	{
		write (1, ", ", 2);
	}
}
