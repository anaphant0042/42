/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:36:26 by alara-gu          #+#    #+#             */
/*   Updated: 2024/03/24 19:37:45 by alara-gu         ###   ########.fr       */
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
		write (1, "x or y can't be  0 or negative", 26);
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
