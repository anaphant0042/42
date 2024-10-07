/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:35:51 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 14:45:10 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (!dest || !src || !n)
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int		main(void)
{
	//char dest[20] = "Ana";
	//char dest2[20] = "Ana";
	char src[] = "lorem ipsum dolor sit amet";
	char src2[] = "lorem ipsum dolor sit amet";
	int n = 6;
	char *dest;
	char *dest2;
	dest = src + 1;
	dest2 = src2 + 1;

	if (ft_memmove(dest, src, n) != NULL)
	{
		printf ("my func: %s\n", dest);
		memmove(dest2, src2, n);
		printf ("memmove: %s\n", dest2);
	}
	else
		printf("function returning null as expected");
}
*/
