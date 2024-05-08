/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:20:36 by alara-gu          #+#    #+#             */
/*   Updated: 2024/03/25 17:46:06 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int k);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	while (i < 8)
	{
		while (j < 9)
		{
			while (k < 10)
			{
				ft_putchar(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
}

void	ft_putchar(int i, int j, int k)
{
	char	a;
	char	b;
	char	c;

	a = i + '0';
	b = j + '0';
	c = k + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (i == 7 && j == 8 && k == 9)
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}
