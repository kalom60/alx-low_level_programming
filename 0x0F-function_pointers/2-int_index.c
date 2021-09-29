#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_indedx - searches for an integer
 * @array: array of elems
 * @size: number of elems in the array
 * @cmp: is a pointer to the func to be used to compare vals
 * Return: index first elem cmp func does not return 0
 * If no elem matchs, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result = 0;

	if (size <= 0)
		return (-1);
	if (cmp && size && array)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result == 1)
				return (i);
		}
	}
	return (-1);
}
