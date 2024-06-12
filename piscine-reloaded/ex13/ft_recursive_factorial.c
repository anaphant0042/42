/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:40:21 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 16:40:36 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 11;
	printf("%i", ft_recursive_factorial(nb));
}
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
