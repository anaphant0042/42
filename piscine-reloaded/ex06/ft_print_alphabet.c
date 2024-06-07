#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
 
	c = 97;
	while (c < 123)
	{
		ft_putchar(c);
		c++;
	}
}
