/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/14 16:14:43 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_read_file(char *file_name)
{
	int		fd;
	char	text[10000];
	int		i;
	int		file_size;

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
