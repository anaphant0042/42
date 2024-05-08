/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:14 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/11 15:59:25 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*file_name;
	char	*map;
	t_table t1;

	i = 1;
	while (i < argc)
	{
		file_name = argv[i];
		map = ft_importmap(file_name);
		ft_filltable(map, &t1);
		if (ft_firstvalidation(map, t1) == 1)
			return (1);
		else
			max_squarefinder(map, t1);
			// if (max_sqfinder(map, t1) == 1)
			// retuurn (1)
		i++;
	}
	//free map and stsmtx
	return (0);
}

void	ft_filltable(char *map, t_table *t1)
{
	int		len1stline;
	int		i;
	char	*filas;
	int		columnas;

	len1stline = ft_check_firstline(map);
	i = len1stline;
	t1->empty = map[i - 3];
	t1->obstacle = map[i - 2];
	t1->full = map[i - 1];
	columnas = 0;
	while (map[i + 1] != '\n')
	{
		columnas++;
		i++;
	}
	t1->columnas = columnas;
	filas = (char *)malloc(100*sizeof(char));
	i = 0;
	while (map[i] != t1->empty)
	{
		filas[i] = map[i];
		i++;
	}
	filas[i] = '\n';
	t1->filas = ft_atoi(filas);
	free(filas);
}


int	ft_atoi(char *)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while ([i])
	{
		if ([i] >= '0' && [i] <= '9')
		{
			nb = (nb * 10) + ([i] - 48);
			i++;
		}
		else
			return (nb);
	}
	return (nb);
}

//turn this to a int funciton to return values
int	max_squarefinder(char *map, t_table t1)
{	
	char	**input_map;
	int		**sts_mtx;
	int	f;
	int	c;
	//char	*pos;
	
	input_map = ft_arrayconverter(map, t1);
	if (input_map == 0)
		return (1);
	//if (ft_checkmap(input_map, t1) == 1)
	//	return (1);
	else
	   	sts_mtx = ft_create_stsmtx(t1);
	if (sts_mtx == 0)
		return (1);
	ft_compare_matrices(input_map, sts_mtx, t1);
// this is just to test if sts_mtx is working	
	f = 0;
	while (f < t1.filas)
	{
		c = 0;
		while (c < t1.columnas)
		{
			printf("%i ", sts_mtx[f][c]); 
			c++;
		}
		printf("\n"); 
		f++;
	}
	/*pos = ft_find_max(sts_mtx, t1);
	ij = ft_calcularij(sts_mtx, t1, pos);
	ft_fillmap(map, sts_mtx, ij, t1);
	ft_print_solved_map(map, t1);*/
	return (0);
}

void	ft_compare_matrices(char **input_map, int **sts_mtx, t_table t1)
{
	int	f;
	int	c;
	f = 0;
	while (f < t1.filas)
	{
		c = 0;
		while (c < t1.columnas)
		{
			if (input_map[f][c] == t1.empty) // aqui tambien me falta el empty :c
			{
				sts_mtx[f][c] = ft_checkcell(input_map, f, c, t1);
			}
			c++;
		}
		f++;
	}
}

int	ft_checkcell(char **input_map, int f, int c, t_table t1)
{
	int	val;
	int	i;
	int	j;
	int maxfilas;
	int maxcolumnas;

	val = 0;
	maxfilas = t1.filas - f;
	maxcolumnas = t1.columnas - c;
	while (val < maxfilas)
	{
		i = 0;	
		while (i < val)
		{
			j = 0;
			while (j < val)
			{
				if (input_map[f + i][c + j] == t1.empty)
					j++;
				else
					return (val);
			}
			i++;
		}
		val++;
	}
	return (val);
}

int **ft_create_stsmtx(t_table t1)
{
	int **sts_mtx;
	int	i;

	i = 0;
	sts_mtx = (int **)malloc(t1.columnas * sizeof(int *)); 
	if (sts_mtx == NULL)
		return (0);
	while (i < t1.filas)
	{
		sts_mtx[i] = (int *)malloc(t1.columnas * sizeof(int));
		if (sts_mtx[i] == NULL)
			return (0);
		i++;
	}
	return (sts_mtx);
}

//int	ft_checkmap(char input map, t_table t1)
//{
	//checar que todas las filas tengan mismo numero de columnas
//}

char **ft_arrayconverter(char *map, t_table t1)//sera asi?
{
	char **input_map;
	int 	i;
	int	f;
	int c;
	
	input_map = (char **)malloc(t1.filas * sizeof(char *));
	if (input_map == NULL)
		return (0);
	i = 0;
	while (i < t1.filas)
	{
		input_map[i] = (char *)malloc(t1.columnas * sizeof(char));
		if (input_map[i] == NULL)
			return (0);
		i++;
	}
	ft_fillarr(map, input_map, t1, i);
	f = 0;
	while (f < t1.filas)
	{
		c = 0;
		while (c < t1.columnas)
		{
			printf("%c ", input_map[f][c]); 
			c++;
		}
		printf("\n"); 
		f++;
	}
	return (input_map);
}

void	ft_fillarr(char *map, char **input_map, t_table t1, int i)
{
	int	j;
	int	k;

	i = 0;
	i = 0;
	k = 0;
	while (map[k] != '\n')
		k++;
	k++;
	while (map[k])
	{
		while(i < t1.filas)
		{
			j = 0;
			while(j < t1.columnas)
			{
				input_map[i][j] = map[k];
				k++;
				j++;
			}
			i++;
			k++;
		}
		k++;
	}
}

/*
char *ft_find_max(char **sts_mtx, t_table t1)
{
	int	i;
	int	j;
	int	max;
	char *pos;

	i = 0;
	j = 0;
	max = 0;

	while (i < t1.filas)
	{
		j = 0;
		while (j < t1.columnas)
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

void	ft_fillmap(map, sts_mtx, ij, s_table t)
{
	int	val;
	int	i;
	int	j;
	char *sq_pos;

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
			*sq_pos[i][j] = t1.full;
			j++;
		}
	i++;
	}
}


ft_print_solvedmap(map, s_table t)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < t1.filas)
	{
		j = 0;
		while (j < t1.columnas)
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
aqui termina pseudo code*/

int	ft_firstvalidation(char *map, t_table t1)
{
	if (ft_norepeat(t1) == 1)
		return (1);
	else if (ft_check_validsymbs(map, t1) == 1)
		return (1);
	return (0);
}

int	ft_check_validsymbs(char *map, t_table t1)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
			i++;
	while (map[i])
	{
		if (map[i] == t1.empty || map[i] == t1.obstacle || map[i] == '\n')
		i++;
		else
			return(1);
	}
	return (0);
}

int	ft_norepeat(t_table t1)
{
	if (t1.empty == t1.full || t1.empty == t1.obstacle || t1.full == t1.obstacle)
		return (1);
	else
		return (0);
}

int	ft_len(char *)
{
	int	i;

	i = 0;
	while ([i])
		i++;
	return (i);
}

int	ft_check_firstline(char *map)
{
	int		i;

	i = 0;
	while (map[i] != '\n')
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



	/*if (t1.filas == 1)
		{
			while (c < t1.columnas)
			{
				if (input_map[0][c] = t1.empty) // aqui tambien me falta el empty :c
				{
					sts_mtx[0][c] = 1;				}
			c++
			}
		}*/
		//tengo que revisar que haya al menos un vacio, y la respuesta sera
		//llenar el primer vacio
		//creo que el proceso "normal" cubre este paso
		//si en el sts_mtx todo da 0, es un mapa no valido;
