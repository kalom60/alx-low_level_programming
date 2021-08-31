#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int num1, num2, fnum;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 48; i++)
	{
		fnum = num1 + num2;
		printf(", %ld", fnum);
		num1 = num2;
		num2 = fnum;
	}
	printf("\n");
	return (0);
}
