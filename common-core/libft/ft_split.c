#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);
static int	count_words(char const *s, char c);
static char*	fill_words(char const *s, char c);
static void	free_arr(char **arr, int w);

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
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
*/

char **ft_split(char const *s, char c)
{
	int		words;
	int		w;
	int		i;
	char	**arr;

	words = count_words(s, c);
	printf("words: %i\n", words);
	arr = malloc(sizeof(char *) * words + 1);
	if (!arr)
		return (NULL);
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
	arr[w] = '\0';
	return (arr);
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

static char*	fill_words(char const *s, char c)
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
