/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:44:24 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/19 16:51:27 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_error(int x)
{
	char *error[] = {"File name missing\0", "Too many arguments\0", "Cannot read file\0"};
	int	i;

	i = 0;
	while (error[x][i])
	{
		ft_putchar(error[x][i]);
		i++;	
	}
}
