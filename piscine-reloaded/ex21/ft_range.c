/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:20:08 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 12:03:01 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>
int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*range;

	min = 15;
	max = 30;
	range = ft_range(min, max);

	int	diff = max - min;

	int	i = 0;
	while (i < diff)
	{
		printf("%i\n", range[i]);
		i++;
	}
}
*/
int	*ft_range(int min, int max)
{
	int	*range;
	int	diff;
	int	i;

	diff = max - min;
	if (min > max)
		return (NULL);
	else
	{
		range = (int *)malloc(sizeof(int) * diff);
		if (range == NULL)
			return (0);
		i = 0;
		while (i < diff)
		{
			range[i] = min + i;
			i++;
		}
	}
	return (range);
}
