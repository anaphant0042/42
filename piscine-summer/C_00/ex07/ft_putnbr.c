/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:52:37 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/09 14:37:17 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	nbrlen(long nbr);
int	power(int len);

void	ft_putnbr(int n)
{
	char	c;
	long	nbr;
	int		len;

	nbr = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		nbr = (long)n * -1;
	}
	else
		nbr = n;
	if (n == 0)
		write(1, "0", 1);
	len = nbrlen(nbr);
	while (len > 0)
	{
		c = (nbr / power(len)) % 10 + '0';
		write(1, &c, 1);
		len--;
	}
}

int	power(int len)
{
	int	power;

	power = 10;
	if (len == 1)
		return (1);
	while (len > 2)
	{
		power = power * 10;
		len--;
	}
	return (power);
}

int	nbrlen(long nbr)
{
	int	len;

	len = 0;
	while (nbr > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

int	main(void)
{
	int	n;

	n = 0;
	ft_putnbr(n);
}
