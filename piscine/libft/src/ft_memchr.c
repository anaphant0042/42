#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char needle = 'a';
	char	heystack[] = "banxna";
	int	n = 2;

	printf("%p\n", ft_memchr(heystack, needle, n));
}
*/
