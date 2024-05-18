#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char			s[] = {65, 66, 67};
	int			c;
	size_t	n;
	int	i;

	i = 0;
	n = 2;
	c = 102;

	while (i < 3)
	{
		printf("%c, ", s[i]);
		i++;
	}

	ft_memset(s, c, n);

	i = 0;
	while (i < 3)
	{
		printf("%c, ", ((char *)s)[i]);
		i++;
	}
}
*/
