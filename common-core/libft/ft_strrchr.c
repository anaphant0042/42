/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:17:43 by alara-gu          #+#    #+#             */
/*   Updated: 2024/07/02 18:41:32 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int					i;
	int					j;
	int					len;
	unsigned char		c1;

	c1 = c;
	i = 0;
	j = -1;
	len = ft_strlen(s);
	while (s[i] && i <= len)
	{
		if (s[i] == c1)
			j = i;
		i++;
	}
	if (s[i] == c1)
		return ((char *)s + i);
	if (j == -1)
		return (NULL);
	else
		return ((char *)s + j);
}
/*
int	main(void)
{
	char	needle = '\0';
	char	heystack[] = "teste";
	char *result;

	if (!(result = ft_strrchr(heystack, needle)))
		printf("NULL\n");
	else
		printf("%s\n", result);
}
*/
