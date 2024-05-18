#include "libft.h"

int	count_words(char *s, char c);
int	count_letters(char *b, char c);

char	**ft_split(char const *s, char c)
{
	char	**arrarr;
	int		words;
	int		letters;
	int		i;
	int		j;

	words = count_words((char *)s, c) + 1;
		printf("words: %i\n", words);
	arrarr = (char **)malloc(sizeof (char **) * (words + 1));
	if (!arrarr)
		return (NULL);
	arrarr[words + 1] = "\0";
	i = 0;
	j = 0;
	while (j < words)
	{
		letters = count_letters((char *)s + i, c);
			printf("letters: %i\n",letters);
		arrarr[j] = (char *)malloc(sizeof (char *) * (letters + 1));
		if (!arrarr[j])
			return (NULL);
		arrarr[j] = ft_substr(s , i, letters);
		i = i + letters + 1;
		j ++;
	}
	return (arrarr);
}

int	count_words(char *s, char c)
{
	int	i;
	int	words;

	while (s[i])
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

int	count_letters(char *b, char c)
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
