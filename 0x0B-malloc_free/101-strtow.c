#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag = 0, c = 0, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * copy_word - helper function to copy a word from a string
 * @start: start index of the word
 * @end: end index of the word
 * @str: string to copy from
 *
 * Return: pointer to a newly-allocated copy of the word
 */
char *copy_word(int start, int end, char *str)
{
	char *word = malloc(end - start + 1);
	int i;

	if (word == NULL)
		return (NULL);

	for (i = start; i < end; i++)
		word[i - start] = str[i];

	word[i - start] = '\0';

	return (word);
}

/**
 * allocate_matrix - helper function to allocate memory for the matrix
 * @words: number of words in the string
 *
 * Return: pointer to a newly-allocated matrix
 */
char **allocate_matrix(int words)
{
	char **matrix;

	matrix = malloc((words + 1) * sizeof(char *));

	if (matrix == NULL)
		return (NULL);

	return (matrix);
}

/**
 * fill_matrix - helper function to fill the matrix with words
 * @str: string to split into words
 * @matrix: matrix to fill
 * @words: number of words in the string
 */
void fill_matrix(char *str, char **matrix, int words)
{
	int i, k = 0, c = 0, start = 0, end = 0;

	for (i = 0; i <= words; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				matrix[k] = copy_word(start, end, str);

				if (matrix[k] == NULL)
					return;

				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}

	matrix[k] = NULL;
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix;
	int len = 0, words = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (*(str + len))
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = allocate_matrix(words);

	if (matrix == NULL)
		return (NULL);

	fill_matrix(str, matrix, len);

	return (matrix);
}
