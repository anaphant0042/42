/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:14:34 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/11 19:45:27 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putnbr_base(int nbr, char *base);
void	ft_calculatearr(char *base, int Q, int baselen, int BNBRLEN);
int		ft_checkbase(char *base);
int		ft_calc_bnbrlen(int Q, int baselen);
int		ft_calc_baselen(char *base);

int	main(void)
{
	char base[] = "0123456789ABCDEF";
	if (ft_putnbr_base(55, base) == 1)
	{
		return(1);
	}
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (base[0] == '\0')
		return (0);
	else
	{
		while (base[i])
		{
			if (base[i] == '+' || base[i] == '-')
				return (1);
			else
			{
				while (base[i])
				{
				if (base[i + j] == base[i])
					return (1);
				j++;
				}
			}
			i++;
		}
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;
	int	bnbrlen;

	if (ft_checkbase(base) == 1)
	{
		write(1, "error", 6);
		return (1);
	}
	else if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	baselen = ft_calc_baselen(base);
	bnbrlen = ft_calc_bnbrlen(nbr, baselen);
	ft_calculatearr(base, nbr, baselen, bnbrlen + 1);
	return(0);
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
	while (arr[i])
	{
		c = arr[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}
