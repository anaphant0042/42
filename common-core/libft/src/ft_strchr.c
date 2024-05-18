#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char needle[] = "ana";
	char	heystack[] = "banana";

	printf("%s\n", ft_strchr(heystack, needle));

}*/
