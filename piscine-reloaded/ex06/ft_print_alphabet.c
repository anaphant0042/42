#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	c;
 
	i = 0;
	c = 97;
	while (i < 26)
	{
		ft_putchar(c);
		i++;
		c++;
	}
}
