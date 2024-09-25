/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/25 13:43:12 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc >= 3)
		write(1, "Too many arguments.\n", 20);
	else if (argc == 2)
	{
		if (ft_read_file(argv[1]) == 1)
			write(1, "Cannot read file.\n", 18);
	}
	return (0);
}
