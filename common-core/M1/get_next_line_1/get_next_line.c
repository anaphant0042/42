#include "get_next_line.h"

int	main(void)
{
	int	i;
	int	fd;

	fd = open("text")
	i = 0;
	while (i <4)
	{
		printf("next line: %s", get_next_line(fd))
		i++;
	}
}

char	*get_next_line(int fd)
{
	int	new_line_completed;
	int	chars_read;
	char	*next_line;
	static char	*carry;

	while (new_line_completed == 0 && chars_read >= 0)
	{
		if (carry != NULL)
		{
			new_line_completed = handle_carry(&next_line, &carry, &chars_read, fd);
			if (new_line_completed == 1)
				return (next_line);
		}
		else
		{
			new_line_completed = handle_no_carry(&new_line, &carry, &chars_read, fd);
			if (new_line_completed == 1)
				return(next_line)
		}
	}
}

int	handle_carry(char **next_line, char **carry, int *chars_read, int fd)
{
	char	*buffer;
	int	i;

	i = find_new_line(carry);
	if (i > 0)
	{
		next_line = substring(carry, i + 1);
		new_carry(&carry, i + 2);
	}
	else
	{
		*chars_read = read(fd, buffer, BUFF_SIZE);
		*carry = ft_strjoin(carry, buffer);
		i = find_new_line(carry);
		if (i > 0)
		{
			next_line = substring(carry, i + 1);
			new_carry(&carry);
			return (1);
		}
		else
			return (0)
	}
}

int	handle_no_carry(char **next_line, char **carry, int *chars_read, int fd)
{
	char	*buffer;
	int	i;

	*chars_read = read(fd, buffer, BUFF_SIZE);
	i = find_new_line(buffer);
	if(i > 0)
	{
		next_line = substring(buffer, i + 1);
		new_carry(&buffer, i + 2);
		carry = ft_strdup(buffer);
		return (1);
	}
	else
	{
		carry = strdup(buffer);
		return (0);
	}
}

int	find_new_line(char	*carry)
{
	int	i;

	i = 0;
	while (carry[i])
	{
		if (carry[i] == "\n")
			return(i);
		i++;
	}
	return (-1)
}

void	new_carry(char	**carry, int i)
{
	int	carry_len;

	carry_len = ft_strlen(carry);
	if (i < carry_len)
		carry = substring(carry, i, carry_len);
	else
		carry = NULL;
}
