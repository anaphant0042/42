/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:48:02 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/19 18:01:09 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;

	min = 1;
	max = 5;
	range = ft_range(min, max);

	int	i = 0;
	while (range[i])
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
		range = (int *)malloc(sizeof(int) * (diff + 1));
		if (range == NULL)
			return (0);
		i = 0;
		while (i < diff)
		{
			range[i] = min + i;
			i++;
		}
		range[i] = '\0';
	}
	return (range);
}
