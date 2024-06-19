/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:56:05 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/19 12:16:17 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_starts_with_a(char *element);

int	main(void)
{
	char *tab[] = {"ana", "alena", "jorge", "anaid", "0"};
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
	int	k;

	i = 0;
	k = 0;
	while (tab[i][0] != '0')
	{
		if ((f)(tab[i]) == 1)
			k++;
		i++;
	}
	return (k);
}
