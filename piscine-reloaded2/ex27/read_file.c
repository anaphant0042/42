/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:55:18 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/25 15:08:55 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	read_file(char *text)
{
	int		fd;
	char	c;

	fd = open(text, O_RDONLY);
	if (fd == -1)
		return (1);
	while (read(fd, &c, 1) == 1)
		write(1, &c, 1);
	return (0);
}
