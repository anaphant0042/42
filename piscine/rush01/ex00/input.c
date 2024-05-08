/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:38:30 by alara-gu          #+#    #+#             */
/*   Updated: 2024/03/31 21:42:12 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_error();

/*errores de input y creacion de matriz de input*/	
int ft_checkargc(int argc)
{
	if (argc != 2)
	{
		ft_print_error();		
		return (1);
	}
	return (0);
}
char ft_inputmatrix(int pos, int it, char **argv)
{
	char	m_input[16];

	while(it < 31 && (pos < 16))
	{
		if (it % 2 != 0 && (argv[1][it]) != ' ')
		{
			ft_print_error();		
			return ('1');
		}
		if ((argv[1][it] > '0') && (argv[1][it] < '5'))
		{
			m_input[pos] = argv[1][it];
			pos++;
		}
		it++;
	}
	return (m_input);
	if (pos != 16 || it != 31)
	{
		ft_print_error();		
		return ('1');
	}
}
