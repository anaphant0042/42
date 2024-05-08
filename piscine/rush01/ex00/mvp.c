#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{

	/* punteros para generar la matriz resultado*/
	int* ptr1;
	int* ptr2;
	int* ptr3;
	int* ptr4;
	
	ptr1 = (int*)malloc(4);
	ptr2 = (int*)malloc(4);
	ptr3 = (int*)malloc(4);
	ptr4 = (int*)malloc(4);
	int *ptr[] = {ptr1, ptr2, ptr3, ptr4};
	int i;
	int j;

	/* insertar valores en la matriz version sin logica */
	i = 0;
	j = 0;
 	
	while (i < 4)
	{
		j = 0;
		while ( j < 4)
		{
			ptr[i][j] = j;
			char c = ptr[i][j] + '0';
			write(1, &c, 1);
			j++;
		}
	write(1, "\n", 1);
	i++;
	}
	
	/* temporal, imprimir argumentos de entrada*/
	i = 0;
	printf("%i\n", argc);
	while(argv[1][i])
	{
		printf("%c", argv[1][i]);
		i++;
	}
}
