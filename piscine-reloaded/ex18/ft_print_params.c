/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:44:14 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 17:53:22 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

int	main(int argc, char **argv)
{
	int	i;
	int	y;

	y = 1;
	while (y < argc)
	{
		i = 0;
		while (argv[y][i])
		{
			ft_putchar(argv[y][i]);
			i++;
		}
		ft_putchar('\n');
		y++;
	}
}
