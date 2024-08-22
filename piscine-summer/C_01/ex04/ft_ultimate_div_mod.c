/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:10:12 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/22 16:29:19 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	x = 30;
	int	y = 7;
	int	*a = &x;
	int	*b = &y;

	printf("value of a: %i\n", *a);
	printf("value of b: %i\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("new value of a (div): %i\n", *a);
	printf("new value of b (mod): %i\n", *b);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
