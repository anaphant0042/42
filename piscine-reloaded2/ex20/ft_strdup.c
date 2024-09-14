/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:19:00 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/13 17:19:00 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *src);

/*
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str1;
	char	*str2 = "Ana";

	str1 = "Banana";
	printf("str2 contains: %s\n", str2);
	str2 = ft_strdup(str1);
	printf("str2 now contains: %s\n", str2);
}
*/

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(sizeof(char *) * ft_strlen(src));
	if (dup == NULL)
		return (0);
	else
	{
		i = 0;
		while (src[i])
		{
			dup[i] = src[i];
			i++;
		}
	}
	return (dup);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
