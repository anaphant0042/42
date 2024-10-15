#include "get_next_line.h"

int	main(void)
{
	int	fd = open("text", O_RDONLY);
	printf("%i\n", fd);
	char	*next_line = get_next_line(fd);
	printf("%s\n", next_line);
	next_line = get_next_line(fd);
	printf("%s\n", next_line);
	free(next_line);
}

char	*get_next_line(int fd)
{
	static char	*new_char;
	static int	i;

	i = 0;
	new_char = malloc(sizeof (char));

	char	*buffer = malloc(sizeof (char) * BUFFER_SIZE);
	int	read_res = read(fd, buffer, BUFFER_SIZE);
	printf("chars read: %i\nbuff size: %i\n", read_res, BUFFER_SIZE);

	*new_char = buffer[i++];

	return (new_char);
}
