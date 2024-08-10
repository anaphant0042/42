/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:13:53 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/10 18:05:12 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);
void	swap(int *one, int *two);

int	main(void)
{
	int	intarr[] = {10, 3, 7, 4, 122, 2, 1};
	int	arrsize = 7;
	int	i;

	ft_sort_int_tab(intarr, arrsize);
	i = 0;
	while (intarr[i])
	{
		printf("%i ", intarr[i]);
		i++;
	}
	printf("\n");	
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	step;
	int	i;

	step = 0;
	while (step < size - 1)
	{
		i = 0;
		while (i < size - step - 1)
		{
			if (tab[i] > tab[i + 1])
				swap(&tab[i], &tab[i + 1]);
			i++;
		}
		step++;
	}
}

void	swap(int *one, int *two)
{
	int	tmp;

	tmp = *one;
	*one = *two;
	*two = tmp;
}
