/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:23:44 by alara-gu          #+#    #+#             */
/*   Updated: 2024/06/25 17:18:23 by alara-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void			ft_putstr_fd(char *s, int fd);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_strlen(char *str);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(char *str, char *to_find, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isupper(int c);
int				ft_islower(int c);
int				ft_isalnum(int c);
