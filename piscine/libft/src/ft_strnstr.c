#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < n)
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
*/
int	main(void)
{
	char needle[] = "ana";
	char	heystack[] = "bxnana";
	int	n;

	n = 2; // i get a weird seg fault if i dont find the needle n the heystack in the n bytes.
	printf("%s\n", ft_strnstr(heystack, needle, n));
}
