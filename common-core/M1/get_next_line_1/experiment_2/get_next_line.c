#include "get_next_line.h"

void find_new_line(char **buffer, char **carry, char **new_line);

int	main(int argc, char **argv)
{
	int	fd;
	int	i;

	fd = open(argv[1], O_RDONLY);
	i = 0;
	while(i < 4)
	{
		printf("\nnext line: %s\n\n", get_next_line(fd));
		i++;
	}

}

char	*get_next_line(int fd)
{
	int	chars_read;
	int	i;
	char	*buffer;
	char	*temp;
	static char	*carry;
	char	*new_line;

	printf("saved carry: %s\n", carry);
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (NULL);

	if (carry != NULL)
	{
		i = ft_strchr_i(carry, '\n');
		if (i < 0)
		{
			chars_read = read(fd, buffer, BUFFER_SIZE);
			find_new_line(&buffer, &temp, &new_line);
			new_line = ft_strjoin(carry, new_line);
			carry = temp;
			printf("checking carry: %s\n", carry);
		}
	}
	else
	{
		chars_read = read(fd, buffer, BUFFER_SIZE);
		printf("chars read: %i\n", chars_read);
		find_new_line(&buffer, &carry, &new_line);
	}

	free(buffer);
	return(new_line);
}

void find_new_line(char **buffer, char **carry, char **new_line)
{
	int	i;

	i = ft_strchr_i(*buffer, '\n');
	printf("new line found at position: %i\n", i);
	if (i >= 0)
		*new_line = ft_substr(*buffer, 0, i);
	if (i >= 0 && i <= BUFFER_SIZE)
	{
		*carry = ft_substr(*buffer, i + 1, BUFFER_SIZE);
		printf("saving carry: %s\n", *carry);
	}
	else
		carry = NULL;
}
