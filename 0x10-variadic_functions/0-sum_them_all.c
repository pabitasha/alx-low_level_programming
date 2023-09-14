#include "main.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: resepresents the number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list nums;
	unsigned int count;
	int result;

	if (n == 0)
		return (0);
	result = 0;

	/* init valist for the number of arguments */
	va_start(nums, n);

	/* loop through/access all arguments stored in the valist */
	for (count = 0; count < n; count++)
		result += va_arg(nums, int);
	va_end(nums);
	return (result);
}
