#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int arg;

while (arg < argc)
{
printf("%s\n", argv[arg]);
arg++;
}
return (0);
}
