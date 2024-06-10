/*#include <stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
	char *str = "Ana banana";

	printf("%i", ft_strlen(str));
}
*/
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
