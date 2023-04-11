#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all command line arguments into a single string
 *
 * @ac: Number of arguments
 * @av: Array of pointers to arguments
 *
 * Return: Pointer to concatenated string on success, NULL on failure or if
 *         either @ac or @av is 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1;
		len = 0;
	}

	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';

	if (len != total_len - 1)
	{
		free(str);
		return (NULL);
	}

	return (str);
}
