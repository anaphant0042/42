/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:41:18 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/05 11:34:09 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		ft_intlen(long lnb);
void	ft_writearr(char *arr);

int	main(void)
{
	ft_putnbr(99999999);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		j;
	int		intlen;
	char	arr[12];
	long	lnb;

	i = 0;
	lnb = nb;
	if (lnb == 0)
		arr[0] = '0';
	else if (lnb < 0)
	{
		j = 1;
		lnb = lnb * -1;
		arr[0] = '-';
	}
	intlen = ft_intlen(lnb);
	while (intlen > 0)
	{
		arr[intlen - 1 + j] = (lnb % 10) + 48 ;
		intlen--;
		lnb = lnb / 10;
	}
	ft_writearr(&arr[0]);
}

int	ft_intlen(long lnb)
{
	int	i;

	i = 0;
	while (lnb > 0)
	{
		lnb = lnb / 10;
		i++;
	}
	return (i);
}

void	ft_writearr(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		write(1, &arr[i], 1);
		i++;
	}
}
