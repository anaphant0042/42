/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mvp-2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llazaro- <llazaro-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:40:16 by llazaro-          #+#    #+#             */
/*   Updated: 2024/03/31 22:41:20 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(void);

int	main(int argc, char **argv)
{
	char	m_input[16];
	char mtr[4][4];
	int i;
	int j;
	int	col;
	int	row;

	i = 0;
	j = 0;

	/*input errors and input matrix creation*/	
	int pos;
 	unsigned int it;

	pos = 0;
	it = 0;
	if (argc != 2)
	{
		ft_print_error();
		return (0);
	}
	while(it < 31 && (pos < 16))
	{
		if (it % 2 != 0 && (argv[1][it]) != ' ')
		{
			ft_print_error();
			return (0);
		}
		if ((argv[1][it] > '0') && (argv[1][it] < '5'))
		{
			m_input[pos] = argv[1][it];
			pos++;
		}
		it++;
	}
	if (pos != 16 || it != 31)
	{
		ft_print_error();
		return (0);
	}
	
	/*output matrix fill in with x*/
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			mtr[row][col] = 'x';
			col++;
		}
	row++;
	}
	/*check columns and fill in fix values*/
	col = 0;
	while (col < 4)
	{
		if (m_input[col] == '1' && m_input[col+4] == '4')
		{
			mtr[0][col] = '4';
			mtr[1][col] = '3';
			mtr[2][col] = '2';
			mtr[3][col] = '1';
		}
		else if (m_input[col] == '4' && m_input[col + 4] == '1')
		{
			mtr[0][col] = '1';
			mtr[1][col] = '2';
			mtr[2][col] = '3';
			mtr[3][col] = '4';
		}
		else if (m_input[col] == '1' && m_input[col + 4] == '2')
		{
			
			mtr[0][col] = '4';
			mtr[3][col] = '3';
		}
		else if (m_input[col] == '1' && m_input[col + 4] == '3')
		{
			mtr[0][col] = '4';
		}
		col++;
	}

	/*check rows and fill in fix values*/
	pos = 8;
	row = 0;
	while (row < 4)
	{
		if (m_input[pos] == '1' && m_input[pos+4] == '4')
		{
			mtr[row][0] = '4';
			mtr[row][1] = '3';
			mtr[row][2] = '2';
			mtr[row][3] = '1';
		}
		else if (m_input[pos] == '4' && m_input[pos+4] == '1')
		{
			mtr[row][0] = '1';
			mtr[row][1] = '2';
			mtr[row][2] = '3';
			mtr[row][3] = '4';
		}
		else if (m_input[pos] == '1' && m_input[pos + 4] == '2')
		{
			
			mtr[row][0] = '4';
			mtr[row][3] = '3';
		}
		else if (m_input[pos] == '1' && m_input[pos + 4] == '3')
		{
			mtr[row][0] = '4';
		}
		row++;
		pos++;
	}
	/*next steps would be:
	 * create status matrix to assingn the fixed values already placed
	 * decide method for filling in the missing values
	 * could be backtracking or decision tree or structures
	 * and more that we have to learn
	 * once filled in, compare against condition of input matrix
	 * repeat until we find a valid solution
	 * and find out exits in case there is no solution
	 * */

	/*print output matrix */
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			write(1, &mtr[row][col], 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

/* lessons learned:
 * never do everything in one document.
 * separating functions post-facto is very hard
 * we have to learn how to do proper return values for functions
 * this was fun*/
