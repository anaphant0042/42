/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgugliel <lgugliel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:03:48 by lgugliel          #+#    #+#             */
/*   Updated: 2024/03/24 18:42:39 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1 || y < 1)
	{
		write (1, "x or y can't be 0 or negative", 26);
	}
	else
	{
		i = 0;
		j = 0;
		while (j < y)
		{
			ft_putchar(i, j, x, y);
			write (1, "\n", 1);
			i = 0;
			j++;
		}
	}
}
