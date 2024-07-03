/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:38:21 by alara-gu          #+#    #+#             */
/*   Updated: 2024/07/02 19:00:15 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return (str);
	if (n == 0)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < n)
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	needle[] = "A";
	char	heystack[] = "fake";
	int	n;
	char *result;

	n = 3;
	if (!(result = ft_strnstr(heystack, ((void *)0), n)))
		printf("NULL\n");
	else
		printf("%s\n", ft_strnstr(heystack, ((void *)0), n));
}
*/
