/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/14 16:20:56 by anlara-g         ###   ########.fr       */
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
