/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:29:16 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/15 14:32:26 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n);
void	write_comma(int i, int j, int n);
void	write_i(int i);

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
	int		k;
	int		m;

	k = 0;
	i = 0;
	j = i + (n - 1);
	while (k <= 10 - n)
	{
		i = k;
		m = 0;
		while (m++ < n - 1)
			write_i(i++);
		write_i(j);
		write_comma(k, j, n);
		if (j == 9)
		{
			k++;
			j = k + (n - 1);
		}
		else
			j++;
	}
}

void	write_comma(int k, int j, int n)
{
	if (k == 10 - n && j == 9)
	{
	}
	else
		write(1, ",", 1);
}

void	write_i(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}
