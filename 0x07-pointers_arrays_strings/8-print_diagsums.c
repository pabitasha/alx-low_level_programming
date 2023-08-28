#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */
void print_diagsums(int *a, int size)
{
	int x, sum, sizeSum;

	i = 0;
	sum = 0;
	sizeSum = size * size;
	while (x < sizeSum)
	{
		if (x % (size + 1) == 0)
			sum += a[x];
		x++;
	}
	printf("%d, ", sum);

	sum = 0;
	x = 0;
	while (x < sizeSum)
	{
		if (x % (size - 1) == 0 && x != (sizeSum - 1) && x != 0)
			sum += a[x];
		x++;
	}
	printf("%d\n", sum);
}
