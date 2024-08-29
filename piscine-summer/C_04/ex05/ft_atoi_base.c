/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:59:50 by anlara-g          #+#    #+#             */
/*   Updated: 2024/08/28 15:15:35 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_atoi_base(char *str, char *base);
void	base_to_int(str, i base);
int		checkbase(char *base);
int		ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	number;

	if (intc != 3)
		return (1);
	else
		number = ft_atoi_base(argv[1], argv[2]);

}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int s;

	if (checkbase(base)) == 1 || ft_strlen(str) == 0)
	{
		write(1, "error\n", 6);
		return (0);
	}	
	else
	{
		i = 0;
		while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
				i++;
		while (str[i] && str[i] == '-' && str[i] == '+')
		{
			if (str[i] == '-')
				s = s * -1;
			i++;
		}
		base_to_int(str, i, base);
	}
}

void	base_to_int(str, i base)
{
	int	baselen;
	int	nbrlen;
	int	i;
	int j;
	int	decimal;

	baselen = ft_strlen(base);
	nbrlen = ft_strlen(str);
	i = 1;
	decimal = 1;
	while (i <= nbrlen)
	{
		j = 0;
		if (str[i] == str[j])
		{
			decimal = decimal + (j * power(baselen(nbrlen - 1)
			nbrlen--;
		}
		else
			j++;
	}
}

int	power(int baselen)
{
	
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || strlen(base) == 1)
		return (1);
	else
	{
		while (base[i])
		{
			if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13) || base[i] == '+' || base[i] == '-') 
				return (1);
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j++])
					return (1);
			}
			i++;
		}
	}
	return (0);
}
