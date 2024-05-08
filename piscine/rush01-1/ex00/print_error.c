/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:45:16 by alara-gu          #+#    #+#             */
/*   Updated: 2024/03/31 22:41:17 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(void)
{
	int i;
	char	errormsg[] = "ERROR!";
	i = 0;
	write(1, &errormsg[i], 6);
	write(1, "\n", 1);
}
