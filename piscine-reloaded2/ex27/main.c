/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:36:59 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/25 15:06:53 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		write (1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write (1, "Too many arguments.\n", 20);
		return (0);
	}
	if (argc == 2)
	{
		i = read_file(argv[1]);
		if (i == 1)
		{
			write (1, "Cannot read file.\n", 18);
			return (0);
		}
	}
}
