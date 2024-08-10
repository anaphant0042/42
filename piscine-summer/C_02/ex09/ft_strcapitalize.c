/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcaitalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:56:53 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/03 18:26:13 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else if (str[i] < 48 || (str[i] > 90  || str[i] < 97 ) ||  (str[i] > 123  || str[i] < 128))
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
			{
				str[i + 1] = str[i + 1] - 32;
			}
			i = i + 2;
		}
		else
			i++;
	}
	return (str);
}
