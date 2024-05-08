/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   branxas.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:11:13 by alara-gu          #+#    #+#             */
/*   Updated: 2024/04/07 23:12:01 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRANXAS_H
# define BRANXAS_H

# include <unistd.h> //write, open, read, close
# include <fcntl.h> //flags for read
# include <stdio.h> //printf
# include <stdlib.h> //malloc

//Declaracion de funciones
void	ft_parsedictionary(char *dictionary, size_t size);
size_t	ft_filesize(char *file_name);
char	*ft_clean(char *number_to_convert);
int		ft_check_sign(char *str, int i);
int		ft_check_whitespace(char *str);
void	ft_putchar(char c);
void	ft_print_error(void);
char	*ft_strstr(char *str, char *to_find);
void	ft_writeletter(int number);
int		ft_strlen(char *str);
void	ft_findletters(char *dictionary, char *number);
char	*ft_temptofree(char *str);
char	*ft_bring_letters(char *position);
void	ft_print_letters(char *str);

#endif
