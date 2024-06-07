#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	temp;
	int	factorial;

	temp = nb;
	factorial = 1;
	while (temp > 1)
	{
		factorial = factorial * temp;
		temp = temp - 1;
	}
	return (factorial);
}
