#include "libft.h"

void	ft_s_bzero(void *s, size_t n);

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
		ft_s_bzero(arrarr, nmemb * size);
	return (arrarr);
}

void	ft_s_bzero(void *s, size_t n)
{
	unsigned int	i;

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
	char	**arrarr;

	arrarr = calloc(3, 10);
	arrarr[0] = "ana banana";
	arrarr[1] = "ini";
	arrarr[2] = "ono";

	printf("%s\n", arrarr[0]);
	printf("%s\n", arrarr[1]);
	printf("%s\n", arrarr[2]);
}
*/
