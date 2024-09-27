/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:21:39 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/25 16:17:25 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_split(char const *s, char c);
static int	count_words(char const *s, char c);
static char	*fill_words(char const *s, char c);
static void	free_arr(char **arr, int w);
static void	fill_arr(const char *s, char **arr, int words, char c);

/*
int	main(int argc, char **argv)
{
	char	**arr;
	int		i;

	if (argc != 3)
	{
		printf("not enough args");
		return (1);
	}
	char c = argv[2][0];
	char *string = argv[1];
	arr = ft_split(string, c);
	if (!arr[0])
	{
		printf("ok");
		return (0);
	}
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
*/

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr;

	if (!s || !c)
		return (NULL);
	words = count_words(s, c);
	arr = malloc(sizeof(char *) * words + 1);
	if (!arr)
		return (NULL);
	fill_arr(s, arr, words, c);
	return (arr);
}

static void	fill_arr(const char *s, char **arr, int words, char c)
{
	int		w;
	int		i;

	i = 0;
	w = 0;
	while (w < words)
	{
		while (s[i] && s[i] == c)
			i++;
		arr[w] = fill_words(s + i, c);
		if (!arr[w])
			free_arr(arr, w);
		while (s[i] && s[i] != c)
			i++;
		w++;
	}
	arr[w] = NULL;
}

static void	free_arr(char **arr, int w)
{
	int	i;

	i = 0;
	while (i < w)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*fill_words(char const *s, char c)
{
	int		letters;
	int		i;
	char	*arr;

	i = 0;
	letters = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		letters++;
	}
	arr = malloc(sizeof (char) * letters + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < letters)
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}
