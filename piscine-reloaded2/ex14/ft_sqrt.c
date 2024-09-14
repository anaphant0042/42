/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/13 17:19:00 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 100;
	printf("%i", ft_sqrt(nb));
}
*/

int	ft_sqrt(int nb)
{
	int	i;
	int	sq;

	i = 0;
	sq = 0;
	while (sq < nb)
	{
		i++;
		sq = i * i;
		if (sq == nb)
			return (i);
	}
	return (0);
}
