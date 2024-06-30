/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:40:09 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 14:39:54 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			srclen;

	i = 0;
	srclen = ft_strlen((char *)src);
	if (size == 0)
		return (srclen);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

/*
int	main(void)
{
	//char	src[] = "ana banana";
	char	dest[15] = "rrrrrr";

	printf("%s\n", dest);
	printf("%li\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	printf("%s\n", dest);
}
*/
