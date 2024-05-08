#include <unistd.h>

void ft_is_negative(int n);

int	main(int argc, char **argv)
{
	char	 n;
   	n = *argv[1];
	ft_is_negative (n);
}

void	ft_is_negative (int n)
{
	if (n == '-')
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}
