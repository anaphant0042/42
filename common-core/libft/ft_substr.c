/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:05:11 by alara-gu          #+#    #+#             */
/*   Updated: 2024/10/09 14:25:33 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_substr(char *substr, char const *s,
				unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char						*substr;
	size_t						strlen;
	size_t						substrlen;

	strlen = ft_strlen(s);
	if (start >= strlen)
	{
		substr = (char *)malloc(sizeof (*s) * 1);
		if (!substr)
			return (NULL);
		else
			substr[0] = '\0';
		return (substr);
	}
	substrlen = strlen - start;
	if (substrlen < len)
		len = substrlen;
	substr = (char *)malloc(sizeof (*s) * (len + 1));
	if (!substr)
		return (NULL);
	else
		substr = fill_substr(substr, s, start, len);
	return (substr);
}

static char	*fill_substr(char *substr, char const *s,
				unsigned int start, size_t len)
{
	unsigned int	i;

	i = 0;
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main(void)
{
	char s[] = "BONJOUR LES HARICOTS !";
	char *d;
	int	start = 8;
	int	len = 22;

	d = ft_substr(s, start, len);
	printf("%s\n", d);
	free(d);
}
*/
