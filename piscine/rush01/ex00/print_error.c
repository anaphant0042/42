/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:45:16 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/07 16:41:33 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(void)
{
	int i;
	char	*errormsg[7];

	errormsg[0] = "ERROR!";
	i = 0;
	while (errormsg[i])
	{
		write(1, errormsg[i], 6);
		i++;
	}
	write(1, "\n", 1);
}
