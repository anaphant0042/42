#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*cat;
	int		i;
	int		j;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	cat = (char *)malloc(sizeof(s1) * (len1 + len2 + 1));
	if (!cat)
		return (NULL);
	else
	{
		i = 0;
		while (i < len1)
		{
			cat[i] = s1[i];
			i++;
		}
		j = 0;
		while (i < len1 + len2)
		{
			cat[i] = s2[j];
			j++;
			i++;
		}
		cat[i] = '\0';
	}
	return (cat);
}
/*
int	main(void)
{
	char s1[] = "ana";
	char s2[] = "banana";
	char *cat;

	printf("%s\n", s1);
	printf("%s\n", s2);
	cat = ft_strjoin(s1, s2);
	printf("%s\n", cat);
}
*/
