/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:38:21 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 14:48:17 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find == NULL)
		return (str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < n)
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char needle[] = "ana";
	char	heystack[] = "potasio bxnana split";
	int	n;

	n = 14; // i get a weird seg fault if i dont find 
				 // the needle n the heystack in the n bytes.
	printf("%s\n", ft_strnstr(heystack, needle, n));
}
*/
