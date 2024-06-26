/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:21:23 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/26 16:00:42 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	putnbr_recursive(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	n = n * 10;
	putnbr_recursive(n, fd);
}

static int	putnbr_recursive(int n, int fd)
{
	int		i;
	char	c;

	i = 0;
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
	int	n = -54326789;

	fd = open("text", O_WRONLY);
	ft_putnbr_fd(n, fd);
}
*/
