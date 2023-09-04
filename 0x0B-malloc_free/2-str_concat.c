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
int i, x;
	i = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
		x = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[x] != '\0')
		x++;

	conct = malloc(sizeof(char) * (i + x + 1));

	if (conct == NULL)
		return (NULL);
	i = x = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		conct[i] = s2[x];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);

}
