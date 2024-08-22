/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:08:59 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/22 17:17:58 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_strlen(char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			destlen;
	size_t			srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen((char *)src);
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main(void)
{
	char src[] = "Banana";
	char dest[] = "Elena";

	printf("dest before: %s\n", dest);
	printf("function return value: %zu\n", ft_strlcat(dest, src, 10));
	printf("dest after: %s\n", dest);
}
*/
