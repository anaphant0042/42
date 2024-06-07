/*#include <stdio.h>
int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 11;
	printf("%i", ft_recursive_factorial(nb));
}
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
