/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:08:20 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 14:34:45 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c);
static int	count_letters(char *b, char c);

char	**ft_split(char const *s, char c)
{
	char	**arrarr;
	int		words;
	int		letters;
	int		i;
	int		j;

	words = count_words((char *)s, c) + 1;
	arrarr = (char **)malloc(sizeof (char **) * (words));
	if (!arrarr)
		return (NULL);
	arrarr[words + 1] = "\0";
	i = 0;
	j = 0;
	while (j < words)
	{
		letters = count_letters((char *)s + i, c);
		arrarr[j] = (char *)malloc(sizeof (char *) * (letters + 1));
		if (!arrarr[j])
			return (NULL);
		arrarr[j] = ft_substr(s, i, letters);
		i = i + letters + 1;
		j ++;
	}
	return (arrarr);
}

static int	count_words(char *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

static int	count_letters(char *b, char c)
{
	int	i;

	i = 0;
	while (b[i] != c && b[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	s[] = "anax banana; elena''' jorge- chispa*";
	char	c = ' ';
	char	**arrarr;
	int		i;

	arrarr = ft_split(s, c);
	i = 0;
	while (i < 5)
	{
		printf("%s\n", arrarr[i]);
		i++;
	}
}
*/
