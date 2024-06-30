/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:16:47 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 14:48:05 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	unsigned char		*str1;
	unsigned char		*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] && str2[i]) && (i < n - 1) && (str1[i] == str2[i]))
		i++;
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	char s1[] = "abcdefgh";
	char s2[] = "";
	unsigned int n = 0;

	printf("%i", ft_strncmp(s1, s2, n));
}
*/
