/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:47:10 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/13 18:34:02 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

/*
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str1;
	char	*str2 = "Ana";

	str1 = "Banana";
	str2 = ft_strdup(str1);
	printf("%s\n", str2);
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
