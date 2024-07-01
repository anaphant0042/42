/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:32:20 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/28 17:49:29 by alara-gu         ###   ########.fr       */
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

	words = count_words((char *)s, c);
	arrarr = (char **)malloc(sizeof (char **) * (words + 1));
	if (!arrarr)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] && s[i] == c)
			i++;
		letters = count_letters((char *)s + i, c);
		arrarr[j] = ft_substr(s, i, letters);
		if (!arrarr[j])
			return (NULL);
		i = i + letters + 1;
		j++;
	}
	arrarr[words] = NULL;
	return (arrarr);
}

static int	count_words(char *s, char c)
{
	int	i;
	int	j;
	int	words;

	words = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i + j] != c)
			{
				j++;
				if (s[i + j + 1] == '\0')
					return (words);
			}
		}
		i = i + j + 1;
		j = 0;
	}
	return (words);
}

static int	count_letters(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

/*
int	main(int argc, char **argv)
{
	char	*s = argv[1];
	char	c = argv[2][0];
	char	**arrarr;
	int		i;

	if (argc == 0)
		return (1);
	arrarr = ft_split(s, c);
	i = 0;
	while (arrarr[i])
	{
		printf("%s\n", arrarr[i]);
		i++;
	}
}
*/
/*
int	main(void)
{
	char	s[] = "";
	char	c = 'i';
	char	**arrarr;
	int		i;

	arrarr = ft_split(s, c);
	i = 0;
	while (arrarr[i])
	{
		printf("%s\n", arrarr[i]);
		i++;
	}
}
*/
