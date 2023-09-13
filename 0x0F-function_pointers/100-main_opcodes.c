#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, c;
	char *ary;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ary = (char *)main;

	for (c = 0; c < bytes; c++)
	{
		if (c == bytes - 1)
		{
			printf("%02hhx\n", ary[c]);
			break;
		}
		printf("%02hhx ", ary[c]);
	}
	return (0);
}
