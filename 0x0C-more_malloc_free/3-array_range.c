#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */
int *array_range(int min, int max)
{
	int range, x;
	int *i;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	i = malloc(range * sizeof(int));

	if (i == NULL)
		return (NULL);

	for (x = 0; x < range; x++)
	{
		*(i + x) = min + x;
	}

	return (i);
}
