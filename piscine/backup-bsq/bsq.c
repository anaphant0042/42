/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:14 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/10 11:55:00 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*file_name;
	char	*map;
	struct	t1;

	i = 1;
	while (i < argc)
	{
		file_name = argv[i];
		map = ft_importmap(file_name);
		printf("this is the input map:\n%s", map);
		t1 = ft_filltable(map, struct_tabledata);
		symbols = ft_extractsymbols(map);
		printf("these are the symbols:%s\n", symbols);
		if (ft_firstvalidation(map, symbols) == 1)
		{
			printf("if this is 1, there is error: %i", ft_firstvalidation(map, symbols));
			return (1);
		}
		/*else
			 max_squarefinder(map, symbols)*/
		i++;
	}
	return (0);
i	//free map and stsmtx
}
 // aqui empieza pseudocode
 //

struct	struct_tabledata
{
	int		filas;
	int		columnas;
	char	empty;
	char	obstacle;
	char	full;
}

struct	fill_table(char *map, struct struct_tabledata)
{
	struct	struct_tabledata t1;
	int		len1stline;
	int		i;
	char	*filas;
	int		columnas;

	len1stline = ft_check_firstline(map);
	i = len1stline - 1;
	t1.empty = map[i - 2];
	t1.obstacle = map[i - 1];
	t1.full = map[i];
	while (map[i + 1] != '\n')
		columnas++;
	t1.columnas = columnas;
	i = 0;
	while (map[i] != t1.empty)
	{
		filas[i] = map[i];
		i++;
	}
	t1.filas = atoi(filas);
	return (t1);
}


void	max_squarefinder(char *map, char *symbols)
{	
	char	**input_map;
	char	**sts_mtx;
	int		filas;
	int		columnas;
	char	*pos;
	
	if (input_map == 0)
		//return 1
	filas = ft_filas(symbols);
	columnas = ft_columnas(input_map);
	input_map = ft_arrayconverter(map, filas, columnas);
	if (ft_checkmap(input map, filas, columnas) == 1)
		//termino
	else
	   	sts_mtx = ft_create_stsmtx(filas, columnas);
	if (sts_mtx == 0)
		//return 1
	ft_compare_matrices(input_map, sts_mtx, filas, columnas);
	printf("this is the status matrix: %s", sts_mtx);
	pos = ft_find_max(sts_mtx, filas, columnas);
	ij = ft_calcularij(sts_mtx, filas, columnas, pos);
	ft_fillmap(map, sts_mtx, ij, symbols);
	ft_print_solved_map(map, filas, columnas);
}

char *ft_find_max(char **sts_mtx, int filas, int columnas)
{
	int	i;
	int	j;
	int	max;
	char *pos;

	i = 0;
	j = 0;
	max = 0;

	while (i < filas)
	{
		j = 0;
		while (j < columnas)
		{
			if (sts_mtx[i][j] > max)
			{
				max = sts_mtx[i][j];
				pos = &sts_mtx[i][j];
			}
		j++;
		}
	i++;
	}	
	return (pos);
}

void	ft_fillmap(map, sts_mtx, ij, symbols)
{
	int	val;
	int	i;
	int	j;
	char full;
	char *sq_pos;

	full = symbols[2];
	i =	ij[0];
   	j = ij[1];
	val = *sts_mtx[i][j];
	sq_pos = map[i][j];

	i = 0;
	j = 0;
	while (i < val)
	{
		j = 0;
		while (j < val)
		{
			*sq_pos[i][j] = full;
			j++;
		}
	i++;
	}
}


ft_print_solvedmap(map, filas, columnas)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < filas)
	{
		j = 0;
		while (j < columnas)
		{
			c = *map[i][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}


}


char *ft_calcularij(sts_mtx, pos)
{
	int val;

	val = *pos;
	
	
}



void	ft_compare_matrices(char **input_map, char **sts_mtx, int filas, int columnas)
{
	int	f;
	int	c;

	if (filas == 1)
		{
			//tengo que revisar que haya al menos un vacio, y la respuesta sera
			//llenar el primer vacio
			//terminar
	while (f < filas)
	{
		c = 0;
		while (c < columnas)
		{
			if (input_map[f][c] = empty) // aqui tambien me falta el empty :c
			{
				sts_mtx[f][c] = ft_checkcell(input_map[f][c]);
			}
			c++;
		}
		f++;
	}
}


int	ft_checkcell(char *input_map, int filas)
{
	int	val;
	int	i;
	int j;	
	
	val = 1
	while (val < filas) // cual??
	{
		i = 0;	
		while (i < val)
		{
			j = 0;
			while (j < val)
			{
				if (input_map[i][j] == empty) // import empty
					j++
				else
					return (val);
			}
			i++;
		}
		val++;
	}
	return (1);
}

int	ft_filas(char *symbols)
{

}

int	ft_columnas(char **input_map)
{

}

int	ft_checkmap(char input map, int filas, int columnas)
{
	//checar que todas las filas tengan mismo numero de columnas
}

char *ft_arrayconverter(char *map, int filas, int columnas)
{
	
	//importante borrar los \n
}

char *ft_create_stsmtx(char *map, int filas, int columnas)
{
	char **sts_mtx;

	sts_mtx = (char **)malloc(columnas * sizeof(char)); 
	while (i < filas)
	{
		stsmtx[i] = (char*)malloc(columnas * sizeof(char));
		i++;
	}
	return (sts_mtx);
}

// aqui termina pseudo code


int	ft_firstvalidation(char *map, char *symbols)
{

	if (ft_norepeat(symbols) == 1)
		return (1);
	else if (ft_check_validsymbs(map, symbols) == 1)
		return (1);
	return (0);
}

int	ft_check_validsymbs(char *map, char *symbols)
{
	char	obstacle;
	char	empty;
	int	i;

	obstacle = symbols[1];
	empty = symbols[0];
	i = 0;
	while (map[i] != '\n')
			i++;
	while (map[i])
	{
		if (map[i] == empty || map[i] == obstacle || map[i] == '\n')
		i++;
		else
			return(1);
	}
	return (0);
}

int	ft_norepeat(char *symbols)
{
	char	full;
	char	obstacle;
	char	empty;

	full = symbols[2];
	obstacle = symbols[1];
	empty = symbols[0];
	if (empty == full || empty == obstacle || full == obstacle)
		return (1);
	else
		return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


// esto tendra que desaparecer cuando ya tenga la estructura
char	*ft_extractsymbols(char *map)
{
	char	symbols[4];
	int		len1stline;
	int		i;
	
	len1stline = ft_check_firstline(map);
	symbols = (char *)malloc(len1stline);
	if (symbols == NULL)
		return (0);
	i = len1stline - 1;
	symbols[4] = '\0';
	while (i >= 0)
	{
		symbols[i] = map[i];
		i--;
	}
	return (symbols);
}

int	ft_check_firstline(char *map)
{
	int		i;

	i = 0;
	while (map[i] != '\n') // this to check only first line and extract values
		i++;
	return (i);
}

char *ft_importmap(char *file_name)
{
	char	*map;
	int		fd;
	size_t	map_size;
	int		map_read;

	map_size = ft_filesize(file_name);
	map = (char *)malloc((map_size + 1));
	if (map == NULL)
		return (0);
	fd = open(file_name, O_RDONLY);
	map_read = read(fd, map, map_size);
	map[map_size + 1] = '\0';
	close(fd);
	//free(map);
	return(map); // how to free map properly?
   					//i dont want to do everything in the main funciton.
}

size_t	ft_filesize(char *file_name)
{
	int		counter;
	char	caracter;
	int		fd;

	counter = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (read(fd, &caracter, 1) == 1)
		counter++;
	close(fd);
	return (counter);
}
