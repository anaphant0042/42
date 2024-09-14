/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/14 17:21:34 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
can't get test to work
#include <stdio.h>

int	ft_starts_with_a(char *element);
int	ft_count_if(char **tab, int (*f)(char *));

int	main(void)
{
	char *tab[] = {"ana", "elena", "jorge", "anaid", "0"};
	int	count;

	count = ft_count_if(tab, ft_starts_with_a);
	printf("number of array elements that start with a: %i\n", count);
}

int	ft_starts_with_a(char *element)
{
	if (element[0] == 'a')
		return (1);
	else
		return (0);
}
*/

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (tab[i])
	{
		if ((f)(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}
