#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		ft_putchar(c);
		c++;
	}
}
