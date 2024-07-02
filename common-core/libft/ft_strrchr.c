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
	int	i;
	int	j;
	int	len;

	i = 0;
	j = -1;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j == -1)
		return (NULL);
	else
		return ((char *)s + j);
}
/*
int	main(void)
{
	char	needle = '';
	char	heystack[] = "";

	printf("%s\n", ft_strrchr(heystack, needle));
}
*/
