/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:10:02 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/22 16:25:15 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a = 30;
	int	b = 7;
	int	d = 0;
	int	m = 0;
	int	*div = &d;
	int	*mod = &m;

	ft_div_mod(a, b, div, mod);

	printf("value of div: %i\n", *div);
	printf("value of mod: %i\n", *mod);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
