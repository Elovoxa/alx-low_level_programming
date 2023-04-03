#include "main.h"
/**
 *
 *  _memcpy - function that copies memory area
 *  @dest: the adress of memory to print
 *  @src: second value
 *  @n: third value
 *
 * Return: chat with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}return (dest);
}
