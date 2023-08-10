#include <stdio.h>
/**
 * main - to print the size of the data types
 *
 *Return: always (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char: %lu byte(s)\n", sizeof(a));
	printf("size of intr: %lu byte(s)\n", sizeof(b));
	printf("size of long intr: %lu byte(s)\n", sizeof(c));
	printf("size of long long intr: %lu byte(s)\n", sizeof(d));
        printf("size of floatr: %lu byte(s)\n", sizeof(e));
	return(0);
}	
