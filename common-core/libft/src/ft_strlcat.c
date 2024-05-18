#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t				destlen;
	size_t				srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen((char *)src);
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (src[i] && i < size - destlen - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
/*
int main(void)
{
	char src[] = "Bananananananananannanana";
	char dest[20] = "Elena";

	printf("%s\n", dest);
	ft_strlcat(dest, src, 20);
	printf("%s\n", dest);
}
*/
