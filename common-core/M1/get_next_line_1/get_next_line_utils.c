/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:45:38 by anlara-g          #+#    #+#             */
/*   Updated: 2024/10/17 15:45:40 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*fill_substr(char *substr, char const *s,
				unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	int		i;
	int		j;

	joint = (char *)malloc(
			sizeof(s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!joint)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i])
		{
			joint[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
			joint[i++] = s2[j++];
		joint[i] = '\0';
	}
	return (joint);
}

int	ft_strchr_i(const char *s, int c)
{
	int						i;
	int						len;
	unsigned char			c1;

	c1 = c;
	len = ft_strlen(s);
	i = 0;
	while (s[i] && i < len)
	{
		if (s[i] == c1)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen((char *)s);
	dest = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
