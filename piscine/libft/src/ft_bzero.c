#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char			s[] = {65, 66, 67};
	size_t	n;
	int	i;

	i = 0;
	n = 2;

	while (i < 3)
	{
		printf("%i, ", s[i]);
		i++;
	}

	ft_bzero(s, n);

	i = 0;
	while (i < 3)
	{
		printf("%c, ", ((char *)s)[i]);
		i++;
	}
}
*/
