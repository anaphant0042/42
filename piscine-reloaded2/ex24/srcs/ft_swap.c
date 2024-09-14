/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:05:39 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/22 16:17:15 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int	n = 1;
	int	m = 2;
	int *a = &n;
	int	*b = &m;

	printf("old value of a: %i\n", *a);
	printf("old value of b: %i\n", *b);
	ft_swap(a, b);
	printf("new value of a: %i\n", *a);
	printf("new value of b: %i\n", *b);
}
*/
