/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:43:07 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/19 17:17:08 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_read_file(char *file_name)
{
	int	fd;
	char	text[10000];
	int	i;
	int	file_size;

	i = 0;
	file_size = ft_filesize(file_name);
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_print_error(2);
		return (0);
	}
	read(fd, text, file_size);
	text[file_size + 1] = '\0';
	ft_display_file(text);
	close(fd);
	return (0);
}
