/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:43:41 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 16:44:00 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_strcmp(char *str1, char *str2);

int	main(void)
{
	char *str1 = "a";
	char *str2 = "s";

	printf("%i", ft_strcmp(str1, str2));
}
*/

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
