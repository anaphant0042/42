/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:22:21 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/15 16:25:17 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	char	*str = argv[1]; 

	if (argc < 2)
		return (0);
	if (ft_str_is_printable(str) == 1)
		printf("String is printable\n");
	else
		printf("String is NOT printable\n");
}
*/
