/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:18:48 by anlara-g          #+#    #+#             */
/*   Updated: 2024/09/14 16:18:52 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *text);
int		ft_read_file(char *file_name);
void	ft_print_error(int x);
void	ft_putchar(char c);
int		ft_filesize(char *file_name);
