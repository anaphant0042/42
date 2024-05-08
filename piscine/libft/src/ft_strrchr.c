#include "libft.h"
// man says to use const char *s as argument
// whats the difference between const and noconst?

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j == 0)
		return (0);
	else
		return ((char *)s + j);
}

/*int	main(void)
{
	char needle[] = "ana";
	char	heystack[] = "banana";

	printf("%s\n", ft_strrchr(heystack, needle));

}*/
