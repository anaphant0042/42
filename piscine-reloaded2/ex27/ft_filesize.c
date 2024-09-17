/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/14 16:19:59 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_filesize(char *file_name)
{
	int		fd;
	int		i;
	char	c;

	i = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file\n", 17);
		return (0);
	}
	while (read(fd, &c, 1) == 1)
		i++;
	close(fd);
	return (i);
}
