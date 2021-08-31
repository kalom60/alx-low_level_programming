#include "main.h"

/**
 * main - prints Holoberton as a message.
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	char str[] = "Holberton\n";
	int val;

	for (val = 0; val < 9; val++)
	{
		_putchar(str[val]);
	}

	return (0);
}
