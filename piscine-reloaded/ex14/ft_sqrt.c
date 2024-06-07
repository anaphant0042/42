/*#include <stdio.h>
int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 676;
	printf("%i", ft_sqrt(nb));
}
*/
int	ft_sqrt(int nb)
{
	int	i;
	int	sq;

	i = 0;
	while (sq < nb)
	{
		i++;
		sq = i * i;
		if (sq == nb)
			return (i);
	}

	return (0);
}
