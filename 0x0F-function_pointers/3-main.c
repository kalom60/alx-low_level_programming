#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - main file
 * @argc: number of lines arguments
 * @argv: array of elems
 * Return: 0
 */

int main(int argc, char *argv[])
{
	register int num1, num2;

	int (*funptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	funptr = get_op_func(argv[2]);
	if (!funptr)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", funptr(num1, num2));
	return (0);
}
