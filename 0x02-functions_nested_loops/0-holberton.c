#include "main.h"

/**
 * main - prints Holoberton as a message.
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int val, size;

	size = sizeof(str) / sizeof(int);
	for (val = 0; val < size; val++)
	{
		_putchar(str[val]);
	}
	_putchar('\n');
	return (0);
}
