/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 15:10:41 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/19 17:34:07 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_foreach(int *tab, int length, void (*f)(int));

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 55555, 6, 7, 8, 9, 10};
	int 	length = 10;
	//int	i = 0;

	//while (i < length)
	//{
	//	ft_putnbr(tab[i]);
	//	i++;
	//}

	ft_foreach(tab, length, &ft_putnbr);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');			
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
