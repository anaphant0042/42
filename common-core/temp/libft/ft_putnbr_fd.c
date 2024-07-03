/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:21:23 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 14:08:38 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	putnbr_recursive(long n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = n;
	c = '0';
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * -1;
	}
	putnbr_recursive(nbr, fd);
	c = c + nbr % 10;
	write(fd, &c, 1);
}

static int	putnbr_recursive(long n, int fd)
{
	char	c;

	c = '0';
	if (n / 10 == 0)
		return (n);
	c = c + (putnbr_recursive(n / 10, fd) % 10);
	write (fd, &c, 1);
	return (n);
}
/*
//must create a file called "text" to try it"
int	main(void)
{
	int	fd;
	int	n = -2147483648;

	fd = open("text", O_WRONLY);
	ft_putnbr_fd(n, fd);
}
*/
