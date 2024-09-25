/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/25 14:11:19 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 13;
	printf("%i", ft_recursive_factorial(nb));
}


int	ft_recursive_factorial(int nb)
{
	if (nb <= 0 || nb >= 13)
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
