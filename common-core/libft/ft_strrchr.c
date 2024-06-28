/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:17:43 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 14:48:27 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j == 0)
		return (0);
	else
		return ((char *)s + j);
}
/*
int	main(void)
{
	char	needle = 'x'; 
	char	heystack[] = "baxnaxna";

	printf("%s\n", ft_strrchr(heystack, needle));

}
*/
