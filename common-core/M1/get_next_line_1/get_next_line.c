/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlara-g <anlara-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:20:49 by anlara-g          #+#    #+#             */
/*   Updated: 2024/10/17 16:25:40 by anlara-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int	is_there_new_line_in_buffer(char *buffer);
int	ft_strlen(char *s);
char	*dupstr(const char *s);
char	*dupstr_n(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*cat_buff_nl(char *carry, char *buffer);

int	main(void)
{
	int	fd = open("text", O_RDONLY);
	printf("fd: %i\n", fd);
	char	*next_line;

	next_line = get_next_line(fd);
	while (next_line != (void*)0)
	{
		printf("\nnext_line: %s\n", next_line);
		next_line = get_next_line(fd);
	}
	free(next_line);
}

char	*get_next_line(int fd)
{
	static char	*new_str;
	int	new_line_status;
	static char	*carry;

	char	*buffer = malloc(sizeof (char) * BUFFER_SIZE);
	int	read_res = read(fd, buffer, BUFFER_SIZE);
	if (read_res < BUFFER_SIZE)
		return ((void *)0);
	if (!carry)
	{
		new_line_status = is_there_new_line_in_buffer(buffer);
		//printf("new line status: %i\n", new_line_status);	
		if (new_line_status == 0)
		{
			new_str = dupstr(buffer);
			carry = dupstr_n(buffer);
			printf("carry: %s\n", carry);
		}
		else
		{
			new_str = dupstr(buffer);
		}
	}
	else
	{
		new_str = cat_buff_nl(carry, buffer);
		free(carry);
	}
	//printf("chars read: %i\nbuff size: %i\n", read_res, BUFFER_SIZE);
	return (new_str);
}

char	*cat_buff_nl(char *carry, char *buffer)
{
		char	*cat_str;
		int	i;
		int j;

		cat_str = malloc(sizeof (char) * ((ft_strlen(carry) + ft_strlen(buffer)) + 1));
		if (!cat_str)
			return (NULL);
		i = 0;
		while(carry[i])
		{
			cat_str[i] = carry[i];
			i++;
		}
		j = 0;
		while (buffer[j] && buffer[j] != '\n')
			cat_str[i++] = buffer[j++];
		cat_str[i] = '\0';
		return (cat_str);
}


char	*dupstr_n(const char *s)
{
	int	len;
	int	i;
	int	j;
	char	*dest;
	
	i = 0;
	while (s[i] != '\n')
		i++;
	len = BUFFER_SIZE - i;
	dest = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dest)
		return (NULL);
	i++;
	j = 0;
	while (s[i] && s[i] != '\n')
		dest[j++] = s[i++];
	dest[i] = '\0';
	return (dest);

}

char	*dupstr(const char *s)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen((char *)s);
	dest = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	return (i);
}
		

int	is_there_new_line_in_buffer(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}
