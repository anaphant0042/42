/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:21:23 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/25 17:23:56 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, s + i, 1);
		i++;
	}
}
/*
//must create a file called "text" to try it"
int	main(void)
{
	int	fd;
	char	str[] = "Ana banana";

	fd = open("text", O_WRONLY);
	ft_putstr_fd(str, fd);
}
*/
