/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:07:25 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/19 17:16:35 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_filesize(char *file_name)
{
	int	fd;
	int	i;
	char	c;

	i = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_print_error(2);
		return (0);
	}
	while(read(fd, &c,1) == 1)
		i++;
	close(fd);
	return (i);	
}
