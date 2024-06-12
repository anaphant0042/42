/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:42:25 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 16:42:41 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(void)
{
	char *str = "Ana Banana";
	ft_putstr(str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
