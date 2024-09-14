/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/14 16:54:29 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);
/*
#include <stdio.h>

static int	ft_strtoint(char *str);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	int	min;
	int	max;
	int	*range;
	
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	range = ft_range(min, max);

	int	i = 0;
	while (i < (max - min))
	{
		printf("%i\n", range[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	nb;
	int	m;
	int	i;

	i = 0;
	m = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		m = m * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	nb = ft_strtoint(str + i);
	return (nb * m);
}

static int	ft_strtoint(char *str)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nb = (nb * 10) + (str[i] - 48);
			i++;
		}
		else
			return (nb);
	}
	return (nb);
}
*/

int	*ft_range(int min, int max)
{
	int	*range;
	int	diff;
	int	i;

	if (min > max || min == max)
		return (NULL);
	else
	{
		diff = max - min;
		range = (int *)malloc(sizeof(int) * (diff));
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
