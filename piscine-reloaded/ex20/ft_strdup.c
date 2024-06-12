/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:01:25 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/10 19:18:20 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>

int	ft_strlen(char *str);
char	*ft_strdup(char *src);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Banana";
	str2 = ft_strdup(str1);
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
