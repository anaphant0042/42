/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:14:08 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 14:46:09 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int						i;
	int						len;
	unsigned char			c1;

	c1 = c;
	len = ft_strlen(s);
	i = 0;
	while (s[i] && i < len)
	{
		if (s[i] == c1)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == c1)
		return ((char *)s + i);
	return (0);
}
/*
int	main(void)
{
	char 	heystack[] = "ana banana";
	char	needle = '\0';
	char	*result;

	result = ft_strchr(heystack, needle);
	if (!(result))
		printf("NULL");
	else
		printf("%s\n", result);
}
*/
