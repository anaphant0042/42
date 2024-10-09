/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:05:47 by alara-gu          #+#    #+#             */
/*   Updated: 2024/10/09 14:27:50 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		inlen;
	int		outlen;
	int		start;
	char	*buffer;

	inlen = ft_strlen((char *)s1);
	start = 0;
	while (s1[start] && ft_strchr((char *)set, (char)s1[start]) != 0)
	{
		start++;
	}
	while (ft_strchr((char *)set, (char)s1[inlen]) != 0)
	{
		inlen--;
	}
	outlen = inlen - start + 1;
	buffer = ft_substr(s1, start, outlen);
	if (!buffer)
		return (NULL);
	buffer[outlen] = '\0';
	return (buffer);
}
/*
int	main(void)
{
	char	s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char	set[] = " ";
	char	*buffer;

	printf("%s\n", s1);
	buffer = ft_strtrim(s1, set);
	printf("%s\n", buffer);
	free(buffer);
}
*/
