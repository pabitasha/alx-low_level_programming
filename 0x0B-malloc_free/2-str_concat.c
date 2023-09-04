#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, x, y, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;

	c = malloc((i * sizeof(*s1)) + (x * sizeof(*s2)) + 1);
	if (c == NULL)
		return (NULL);

	for (y = 0, d = 0; y < (i + x + 1); y++)
	{
		if (y < i)
			a[y] = s1[y];
		else
			a[y] = s2[d++];
	}

	return (c);
}
