#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of size elements, initialized with c.
 *
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: If successful, return a pointer to the created array. Otherwise, return NULL.
 */
char *create_array(unsigned int size, char c)

{

	char *str;

	unsigned int i;



	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);



	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);
}
