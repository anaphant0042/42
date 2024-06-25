#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_islower(c) || ft_isupper(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int	ft_islower(int c)
{
	if (c > 96 && c < 123)
		return (0);
	else
		return (1);
}

int	ft_isupper(int c)
{
	if (c > 64 && c < 91)
		return (0);
	else
		return (1);
}

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (0);
	else
		return (1);
}
