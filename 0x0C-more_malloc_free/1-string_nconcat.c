#include "main.h"
#include "string.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int s1_len;
	char *concat;

	s1_len = strlen(s1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	int concat_len = s1_len + n;

	concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		concat[i] = s2[j];
	}

	concat[i] = '\0';

	return (concat);
}
