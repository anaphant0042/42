/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:26:35 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/15 16:41:34 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			printf("entering mayus loop");
			str[i] = str[i] + 32;
			i++;
		}
		else if (str[i] < 48 || (str[i] > 90  || str[i] < 97 ) ||  (str[i] > 123  || str[i] < 128))
		{
			printf("str[%i]: %i\n", i, str[i]);
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
			i = i + 2;
		}
		else
			i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char	*str = argv[1];
	char	*capitalized_str;

	if (argc < 2)
		return(0);
	else
		capitalized_str = ft_strcapitalize(str);
	printf("%s\n", capitalized_str);
}
