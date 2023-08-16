#include "main.h"
/**
 * main - Determine if a number is positive, negative or zero
 * i : is a number to be checked
 * Return: 0 on success
 */
void positive_or_ornegative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
}
