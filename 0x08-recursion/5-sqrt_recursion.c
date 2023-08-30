#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int square);

	int square = 1;

	return (sqrt_fun(n, square));
}

/**
 * sqrt_fun - helper function to solve _sqrt_recursion
 * @sq: number to determine if square root
 * @n:  int number
 * Return: square root if natural square root, or -1 if none found
 */

int sqrt_fun(int n, int square)
{
	if (n == square * square)
	{
		return (square);
	}
	else if (square < n)
	{
		return (sqrt_fun(n, ++square));
	}
	else
	{
		return (-1);
	}
}
