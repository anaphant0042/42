/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:07:37 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/25 15:12:21 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_s_strlen(char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t				destlen;
	size_t				srclen;

	i = 0;
	destlen = ft_s_strlen(dest);
	srclen = ft_s_strlen((char *)src);
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (src[i] && i < size - destlen - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

static int	ft_s_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(void)
{
	char src[] = "Banana";
	char dest[] = "Elena";

	printf("%s\n", dest);
	ft_strlcat(dest, src, 12);
	printf("%s\n", dest);
}

