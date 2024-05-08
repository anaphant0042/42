#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_print_error();
int ft_inputmatrix(int pos, int it, char **argv);
int ft_checkargc(int argc);

int	main(int argc, char **argv)
{
	char	m_input[16];
	char mtr[4][4];
	int	col;
	int	row;
	int pos;

	int x;

	x = ft_inputmatrix(0, 0, argv);


	if (ft_checkargc(argc) == 1 || x == 1)
		return (0);
	printf("%i", x);

	/*rellenar matriz de ouput con x*/
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			mtr[row][col] = 'x';
			/*write(1, &mtr[row][col], 1);*/
			col++;
		}
	row++;
	}
	/*comprueba columnas y rellena valores 'fijosr'*/
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
		else if (m_input[col] == '2' && m_input[col + 4] == '1')
		{
			mtr[0][col] = '3';
			mtr[3][col] = '4';
		}
		else if (m_input[col] == '1' && m_input[col + 4] == '3')
		{
			mtr[0][col] = '4';
		}
		else if (m_input[col] == '3' && m_input[col + 4] == '1')
		{
			mtr[3][col] = '4';
		}
		col++;
	}

	/*comprueba filas y rellena valores 'fijos'*/
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
		else if (m_input[pos] == '2' && m_input[pos + 4] == '1')
		{
			mtr[row][0] = '3';
			mtr[row][3] = '4';
		}
		else if (m_input[pos] == '1' && m_input[pos + 4] == '3')
		{
			mtr[row][0] = '4';
		}
		else if (m_input[pos] == '3' && m_input[pos + 4] == '1')
		{
			mtr[row][3] = '4';
		}
		row++;
		pos++;
	}
	/* imprime matriz output actualizada */
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
