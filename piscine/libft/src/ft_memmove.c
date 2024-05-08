#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (dest < src)
	{
		while (n > 0)
		{
			n--; // idk if it goes after or before
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int		main(void)
{
	char dest[] = "ana";
	char src[] = "banana";
	int n = 2;

	printf ("%s\n", dest);
	ft_memmove(dest, src, n);
	printf ("%s\n", dest);
}
*/
