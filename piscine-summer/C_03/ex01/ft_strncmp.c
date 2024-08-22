/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:54:31 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/22 16:57:41 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h> 

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "abcdefgh";
	char s2[] = "a8888";
	unsigned int n = 2;

	printf("%i", ft_strncmp(s1, s2, n));
}
*/
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
