/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:11:59 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/22 16:42:10 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	 i;

	i = 0;
	ft_rev_int_tab(tab, 5);
	while (tab[i])
	{
		printf(" %i", tab[i]);
		i++;
	}
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < (size / 2))
	{
		j = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = j;
		i++;
	}
}
