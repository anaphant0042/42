#include "libft.h"

char	*strdup(const char *s)
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
