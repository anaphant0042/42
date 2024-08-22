/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:11:19 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/22 16:34:55 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	char *str = argv[1];

	if (argc < 2)
		return (0);
	else
		printf("length of str = %i\n", ft_strlen(str));
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
