#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	unsigned char	**arrarr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	arrarr = (unsigned char **)malloc(nmemb * size);
	if (!arrarr)
		return (NULL);
	else
		ft_bzero(arrarr, nmemb * size);
	return (arrarr);
}
