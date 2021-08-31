#include "main.h"

/**
 * main - prints Holoberton as a message.
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	char str[] = "Holberton\n";
	char newstr;
	int i = 0;

	while (i <= 9)
	{
		newstr = str[i];
		_putchar(newstr);
		i++;
	}

	return (0);
}
