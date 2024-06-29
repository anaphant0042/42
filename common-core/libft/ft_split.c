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
		letters = count_letters((char *)s + i, c);
		arrarr[j] = ft_substr(s, i, letters);
		if (!arrarr[j])
			return (NULL);
		i = i + letters + 1;
		j++;
	}
	arrarr[words] = 0;
	return (arrarr);
}
// tengo que cambiar mi contador de palabras 
// para que no imprima vacios si me mandan  
// mas de un caracter searador seguido,
// o si me mandan heads / tails.

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
	words = words + 1;
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

int	main(void)
{
	char	s[] = "Ana banana";
	char	c = ' '; 
	char	**arrarr;
	int		i;
	
	arrarr = ft_split(s, c);
	i = 0;
	while (i < 2)
	{
		printf("%s\n", arrarr[i]);
		i++;
	}
}
*/
