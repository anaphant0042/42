/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:25:41 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/23 14:32:23 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//apenas acabod e copiar el archivo de atoi, le voy a poner la conversi on a base 10
//que al parecer es muy sencillo

int	ft_atoi(char *str);
int	ft_checkwhitespace(char *str);
int	ft_strtoint(char *str, int k);

int	main(void)
{
	char	str[] = "    -+-+--+---+++23as1234";
	char	base[] = "01";
	printf("%i", ft_atoi(str));
}

int	ft_atoi(char *str, base)
{
	int	nb;
	int bnb;
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
	bnb = ft_strtoint(str, k);
	bnb = bnb * m;
	//nb = bnb * base + bnb; this is what I have to calculate
	// pending convertign the base str to an int? it is only the len, right?
	// no, the number may not be only numbers, it may be letter... ooooh
	// this is not going to work as atoi
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
