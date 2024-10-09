/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:08:55 by alara-gu          #+#    #+#             */
/*   Updated: 2024/10/09 14:28:49 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checksign(int nb);
static int	ft_numlen(long nbr);
static long	convert_pos_long(int nb);
static int	zero_n_negative(int s, long nbr, char *number, int numlen);

char	*ft_itoa(int nb)
{
	char	*number;
	long	nbr;
	int		numlen;
	int		s;

	s = checksign(nb);
	nbr = convert_pos_long(nb);
	numlen = ft_numlen(nbr);
	number = (char *)malloc(sizeof (char) * (numlen + 1 + s));
	if (!number)
		return (NULL);
	numlen = zero_n_negative(s, nbr, number, numlen);
	number[numlen] = '\0';
	while (nbr > 0)
	{
		number[numlen - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		numlen--;
	}
	return (number);
}

static int	zero_n_negative(int s, long nbr, char *number, int numlen)
{
	if (s == 1)
	{
		number[0] = '-';
		numlen = numlen + 1;
	}
	else if (nbr == 0)
	{
		number[0] = '0';
		number[numlen] = '\0';
	}
	return (numlen);
}

static long	convert_pos_long(int nb)
{
	long	nbr;

	if (nb < 0)
		nbr = (long)nb * -1;
	else
		nbr = nb;
	return (nbr);
}

static int	checksign(int nb)
{
	int	s;

	if (nb < 0)
		s = 1;
	else
		s = 0;
	return (s);
}

static int	ft_numlen(long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		len = 1;
	}
	else
	{
		while (nbr > 0)
		{
			nbr = nbr / 10;
			len++;
		}
	}
	return (len);
}
/*
int	main(void)
{
	int nb = -2147483648;
	char *number;

	number = ft_itoa(nb);
	printf("%s\n", number);
	free(number);
}
*/
