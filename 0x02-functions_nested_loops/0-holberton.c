#include "main.h"

/**
 * main - prints Holoberton as a message.
 *
 * Description: Prints Holberton with _putchar
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar\n";
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
