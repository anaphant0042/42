/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:22:40 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/19 17:18:52 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display_file(char *text)
{
	int	i;
	char	c;
	
	i = 0;
	while (text[i])
	{
		c = text[i];
		ft_putchar(c);	
		i++;
	}
}
