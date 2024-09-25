/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:01:10 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 16:45:03 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char			s[] = {65, 66, 67, 68, 69, 70};
	size_t	n;
	int	i;

	i = 0;
	n = 4;

	while (i < 6)
	{
		printf("%c, ", s[i]);
		i++;
	}
	printf("| ");
	ft_bzero(s, n);

	i = 0;
	while (i < 6)
	{
		printf("%c, ", ((char *)s)[i]);
		i++;
	}
}
*/
