/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:32:18 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/19 17:27:55 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_print_error(0);
	else if (argc >= 3)
		ft_print_error(1);
	else if (argc == 2)
	{
		if (ft_read_file(argv[1]) == 1)
			ft_print_error(2);
	}
	return (0);	
}
