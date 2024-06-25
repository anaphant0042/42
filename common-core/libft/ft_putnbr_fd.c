/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:21:23 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/25 18:00:01 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{	
	char	c;
	int	i;

	if (n < 0)
	{
		write(fd, '-', 1);
		n = n * -1;
	}
	ft_recursivenbr_fd(n, fd);
}

void	ft_recursivenbr_fd(int	n, int fd)
{
	int	i;
}

//must create a file called "text" to try it"
int	main(void)
{
	int	fd;
	int	nbr = 424242;

	fd = open("text", O_WRONLY);
	ft_putnbr_fd(nbr, fd);
}

