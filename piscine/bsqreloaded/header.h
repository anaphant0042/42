/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:52:58 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/10 16:30:52 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <unistd.h> //write, open, read, close
# include <fcntl.h> //flags for read
# include <stdio.h> //printf
# include <stdlib.h> //malloc

struct	s_table
{
	int		filas;
	int		columnas;
	char	empty;
	char	obstacle;
	char	full;
};

typedef struct s_table t_table;

void	ft_filltable(char *map, t_table *t1);
int		ft_firstvalidation(char *map, t_table t1);
int		ft_check_validsymbs(char *map, t_table t1);
int		ft_norepeat(t_table t1);
int		ft_strlen(char *str);
int		ft_check_firstline(char *map);
char	*ft_importmap(char *file_name);
size_t	ft_filesize(char *file_name);
int		ft_atoi(char *str);
int	max_squarefinder(char *map, t_table t1);
char **ft_arrayconverter(char *map, t_table t1);
void	ft_fillarr(char *map, char **input_map, t_table t1, int i);
int **ft_create_stsmtx(t_table t1);
int	ft_checkcell(char **input_map, int f, int c, t_table t1);
void	ft_compare_matrices(char **input_map, int **sts_mtx, t_table t1);
int *ft_find_max(int **sts_mtx, t_table t1);
int *ft_calcularij(int **sts_mtx, int *pos, t_table t1);
void	ft_fillmap(char **input_map, int max, int *ij, t_table t1);
void ft_print_solvedmap(char **input_map, t_table t1);
