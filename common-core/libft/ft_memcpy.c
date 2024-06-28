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

	if (n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
//this versions adds a null terminator after coping memory
//but now I don´t think that is the intention of memcpy
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[] = "banana";
	char	src[] = "orange";
	size_t	n;

	n = 4;
	printf("%s\n", dest);
	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
}
*/
