/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:39:41 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 16:40:04 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;
	int	factorial;

	temp = nb;
	factorial = 1;
	while (temp > 1)
	{
		factorial = factorial * temp;
		temp = temp - 1;
	}
	return (factorial);
}
