#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
int first_Num, second_Num, product_Sum;

if (argc != 3)
{
printf("Error\n");
return (1);
}
first_Num = atoi(argv[1]);
seconf_Num = atoi(argv[2]);
product_Sum = first_Num *second_Sum;

printf("%d\n", product_Sum);

return (0);
}
