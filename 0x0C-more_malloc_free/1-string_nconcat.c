#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of  bytes from s2 to concatenate to s1.
 *
 * Return : pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0;

	unsigned int concat_len = 0;
	unsigned int i, j;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		concat_len = len1 + n;
	else
		concat_len = len1 + len2;

	concatenated = malloc(sizeof(char) * (concat_len + 1));

	if (!concatenated)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len2 && i < concat_len; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
