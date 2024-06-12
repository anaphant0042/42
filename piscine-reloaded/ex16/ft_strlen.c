/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:43:04 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/12 16:43:18 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
	char *str = "Ana banana";

	printf("%i", ft_strlen(str));
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
