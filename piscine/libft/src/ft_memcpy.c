#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "ana";
	char	src[] = "banana";
	size_t	n;

	n = 3;
	printf("%s\n", dest);
	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
}
*/
