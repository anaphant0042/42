/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/13 17:19:00 by anlara-g         ###   ########.fr       */
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
