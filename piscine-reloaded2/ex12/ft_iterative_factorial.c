/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/13 17:19:00 by anlara-g         ###   ########.fr       */
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
