/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:42:04 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/13 14:57:13 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n);


int	main(void)
{
	int	n;

	n = 3;
	ft_print_combn(n);
}

void	ft_print_combn(int n)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < n)
	{
		c = i + '0';
		write(1, &c, 1);
		j = i + 1;
		while (j < 10)
		{
				c = j + '0';
				write(1, &c, 1);
				j++;
		}
		write(1, ",", 1);
		i++;
	}
}
