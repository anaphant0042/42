#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char buffer[100];

	if (argc == 1)
		read (0, buffer, 10); 
	printf("%s\n", buffer);
}
