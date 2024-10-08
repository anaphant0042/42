/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:26:35 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/19 16:59:27 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[i] >= 32 && str[i] <= 64)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i + 1])
			{
				str[i + 1] = str[i + 1] - 32;
				i++;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	char	*str = argv[1];

	if (argc < 2)
		return(0);
	else
			printf("%s\n", ft_strcapitalize(str));
}
*/
