#include "get_next_line.h"
int	strlen_n(char *buffer);
void	strdup_n(char *buffer, char *new_line);

int	main(int argc, char **argv)
{
	int fd;

	fd = open(argv[1], O_RDONLY);
	printf("%s", get_next_line(fd));
}

char	*get_next_line(int fd)
{
	char	*buffer;
	static char	*new_line;
	int	size;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (0);
	read(fd, buffer, BUFFER_SIZE);
	size = strlen_n(buffer);
	new_line = malloc(sizeof(char) * size);
	if (!new_line)
		return (0);
	strdup_n(buffer, new_line);
	return(new_line);
}

int	strlen_n(char *buffer)
{
	int	i;

	i = 0;
	while(buffer[i] != '\n')
		i++;
	return(i + 1);
}

void	strdup_n(char *buffer, char *new_line)
{
	int	i;

	i = 0;
	while(buffer[i] && buffer[i] != '\n')
	{
		new_line[i] = buffer[i];
		i++;
	}
}
