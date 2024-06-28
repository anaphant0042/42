#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	unsigned int		i;

	i = 0;
	substr = (char *)malloc(sizeof (*s) * (len + 1));
	if (!substr)
		return (NULL);
	else
	{
		while (i < len)
		{
			substr[i] = s[start + i];
			i++;
		}
		substr[i] = '\0';
	}
	return (substr);
}
/*
int	main(void)
{
	char s[] = "ana banana";
	char *d;
	int	start = 7;
	int	len = 3;

	d = ft_substr(s, start, len);
	printf("%s\n", d);
}
*/
