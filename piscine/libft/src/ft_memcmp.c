#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "ana banana";
	char s2[] = "ana banana";
	int n = 7;

	printf("%i", ft_memcmp(s1, s2, n));
}
*/
