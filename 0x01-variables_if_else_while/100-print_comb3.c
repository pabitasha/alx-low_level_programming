#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; n++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
				putchar((num1 % 10)+ '0');
				putchar((um2 % 10) + '0');

				if (num2 == 8 && num2 == 9)
					continue;
				{
					putchar(',');
					putchar(' ');
				}
			
		}
	}
	putchar('\n');
	return (0);

