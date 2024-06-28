#include "libft.h"

int	ft_s_strlen(const char *s);

char	*strdup(const char *s)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_s_strlen((char *)s);
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

int	ft_s_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*s1 = "ana banana";
	char	*s2 = NULL;

	printf("before: %s\n", s2);
	s2 = strdup(s1);
	printf("after: %s\n", s2);
}
*/
