/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:39:41 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 17:40:44 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 20;
	printf("%i", ft_iterative_factorial(nb));
}
*/

int	ft_iterative_factorial(int nb)
{
	int	temp;
	int	factorial;

	temp = nb;
	factorial = 1;
	if (nb < 0 || nb > 16)
		return (0);
	while (temp > 1)
	{
		factorial = factorial * temp;
		temp = temp - 1;
	}
	return (factorial);
}
