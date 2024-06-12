/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:41:17 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 17:48:46 by alara-gu         ###   ########.fr       */
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
	while (sq < nb)
	{
		i++;
		sq = i * i;
		if (sq == nb)
			return (i);
	}
	return (0);
}
