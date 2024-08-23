/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:14:34 by alara-gu          #+#    #+#             */
/*   Updated: 2024/08/23 14:16:52 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int		ft_putnbr_base(int nbr, char *base);
void	ft_calculatearr(char *base, int Q, int baselen, int BNBRLEN);
int		ft_calc_bnbrlen(int Q, int baselen);
int		ft_calc_baselen(char *base);
/*
int	main(void)
{
	int number = 300;
	char base[] = "01234567";
	if (ft_putnbr_base(number, base) == 1)
		return(1);
}
*/

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0')
		return (0);
	else
	{
		if (base[0] == '+' || base[0] == '-')
			return (1);
		while (base[i])
		{
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j++])
					return (1);
			}
			i++;
		}
	}
	return (0);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;
	int	bnbrlen;

	if (ft_checkbase(base) == 1)
	{
		write(1, "error\n", 7);
		return (1);
	}
	else if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	baselen = ft_calc_baselen(base);
	bnbrlen = ft_calc_bnbrlen(nbr, baselen);
	ft_calculatearr(base, nbr, baselen, bnbrlen);
	return (0);
}

int	ft_calc_baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_calc_bnbrlen(int Q, int baselen)
{
	int	i;

	i = 0;
	while (Q > 0)
	{
		Q = Q / baselen;
		i++;
	}
	return (i);
}

void	ft_calculatearr(char *base, int Q, int baselen, int BNBRLEN)
{
	char	arr[BNBRLEN];
	char	c;
	int		i;
	int		digit;

	i = BNBRLEN - 1;
	arr[BNBRLEN] = '\0';
	while (Q > 0)
	{
		digit = Q % baselen;
		arr[i] = base[digit];
		Q = Q / baselen;
		i--;
	}
	i = 0;
	while (arr[i])
	{
		c = arr[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}
