/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:21:25 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 14:44:52 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (n == 0 || !n)
		return (dest);
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	*dest = NULL;
	char	*dest2 = NULL;
	char	*src = NULL;
	size_t	n;

	n = 0;
	if (ft_memcpy(dest, src, n) == NULL)
		printf("ft_memcpy returnung NULL as expected\n");
	else
		printf("my version of memcpy: %s\n", dest);
	memcpy(dest2, src, n);
	printf("official memcpy: %s\n", dest2);
}
*/
