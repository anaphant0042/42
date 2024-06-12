/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:37:49 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 17:21:31 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
/*
void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(-101);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
