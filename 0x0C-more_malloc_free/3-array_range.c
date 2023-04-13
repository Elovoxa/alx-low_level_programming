#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers containing a range of values
 * @min: minimum value in the range (inclusive)
 * @max: maximum value in the range (inclusive)
 * Return: pointer to the new array containing the range of values
 * NULL if the memory allocation fails or if @min is greater than @max
 */
int *array_range(int min, int max)
{
		int *ptr;
		int i, size;

		if (min > max)
			return (NULL);

		size = max - min + 1;

		ptr = malloc(sizeof(int) * size);

		if (ptr == NULL)
			return (NULL);

		for (i = 0; min <= max; i++)
			ptr[i] = min++;

		return (ptr);
}
