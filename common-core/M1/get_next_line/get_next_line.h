#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h> // for test

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

char	*get_next_line(int fd);
