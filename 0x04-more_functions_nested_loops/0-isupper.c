#include "main.h"

/**
 * _isupper - check if parameter is an uppercase char
 * @c: input char
 * Return: 1 if its uppercase char or 0 if its not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
