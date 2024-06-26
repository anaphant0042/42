/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:45:22 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/26 16:54:08 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strtoint(char *str);

int	ft_atoi(char *str)
{
	int	nb;
	int	m;
	int 	i;

	i = 0;
	m = 1;
	if (str[i] == '-')
	{
		m = m * -1;
		i++;
	}
	nb = ft_strtoint(str + i);
	nb = nb * m;
	return (nb);
}

int	ft_strtoint(char *str)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nb = (nb * 10) + (str[i] - 48);
			i++;
		}
		else
			return (nb);
	}
	return (nb);
}
/*
int	main(void)
{
	char	str[] = "0";
	printf("%i", ft_atoi(str));
}
*/
