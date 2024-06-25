/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:34:42 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/05 12:59:42 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str);
int	ft_checkwhitespace(char *str);
int	ft_strtoint(char *str, int k);

/*int	main(void)
{
	char	str[] = "    -+-+--+---+++23as1234";
	printf("%i", ft_atoi(str));
}*/

int	ft_atoi(char *str)
{
	int	nb;
	int	j;
	int	k;
	int	m;

	m = 1;
	j = ft_checkwhitespace(str);
	k = j;
	while (str[j])
	{
		if (str[j] == '-')
		{
			m = m * -1;
			k++;
		}
		else if (str[j] == '+')
			k++;
		j++;
	}
	nb = ft_strtoint(str, k);
	nb = nb * m;
	return (nb);
}

int	ft_checkwhitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		else
			return (i);
	}
	return (0);
}

int	ft_strtoint(char *str, int k)
{
	int	nb;

	nb = 0;
	while (str[k])
	{
		if (str[k] >= '0' && str[k] <= '9')
		{
			nb = (nb * 10) + (str[k] - 48);
			k++;
		}
		else
			return (nb);
	}
	return (nb);
}
