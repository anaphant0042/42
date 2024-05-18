#include "libft.h"

int	checksign(int nb);
int	ft_numlen(long nbr);
long	convert_pos_long(int nb);
int	zero_n_negative(int s, long nbr, char *number, int numlen);

char *ft_itoa(int nb)
{
	char	*number;
	long	nbr;
	int		numlen;
	int		s;

	s = checksign(nb);
	nbr = convert_pos_long(nb);
	numlen = ft_numlen(nbr);
	number = (char *)malloc(sizeof (char) * (numlen + 1 + s));
	if (!number)
		return (NULL);
	numlen = zero_n_negative(s, nbr, number, numlen);
	number[numlen] = '\0';
	while (nbr > 0)
	{
		number[numlen - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		numlen--;
	}
	return (number);
}

int	zero_n_negative(int s, long nbr, char *number, int numlen)
{
	if (s == 1)
	{
		number[0] = '-';
		numlen = numlen + 1;
	}
	else if (nbr == 0)
	{
		number[0] = '0';
		number[numlen] = '\0';
	}
	return (numlen);
}

long	convert_pos_long(int nb)
{
	long	nbr;

	if (nb < 0)
		nbr = (long)nb * -1;
	else
		nbr = nb;
	return (nbr);
}

int	checksign(int nb)
{
	int	s;

	if (nb < 0)
		s = 1;
	else
		s = 0;
	return (s);
}

int	ft_numlen(long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		len = 1;
	}
	else
	{
		while (nbr > 0)
		{
			nbr = nbr / 10;
			len++;
		}
	}
	return (len);
}

int	main(void)
{
	int nb = 666666;
	char *number;

	number = ft_itoa(nb);
	printf("%s\n", number);
}
