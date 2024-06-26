#include <stdio.h>
#include <unistd.h>

int	putnbr_recursive(int nbr);

int	main(void)
{
	int	nbr;
	char 	c;

	nbr = 987654;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	nbr = nbr * 10;
	putnbr_recursive(nbr);
}

int	putnbr_recursive(int nbr)
{
	int	i;
	char	c;

	i = 0;
	c = '0';
	if (nbr / 10 == 0)
		return (nbr);
	c = c + (putnbr_recursive(nbr / 10) % 10);
	write (1, &c, 1);
	return (nbr);
}
