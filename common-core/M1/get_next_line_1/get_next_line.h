/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:20:56 by anlara-g          #+#    #+#             */
/*   Updated: 2024/10/17 14:21:12 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // for write
#include <stdlib.h> // for malloc
#include <fcntl.h> // for read
#include <stdio.h> // for testing

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 20
#endif

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strchr_i(const char *s, int c);
int	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
