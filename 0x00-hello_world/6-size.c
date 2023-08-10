#include <stdio.h>
/**
 * main - to print the size of the types
 *
 *Return: (0)
 *
 */
int main(void)
{
         char a;
	 int b;
	 long int c;
	 long long int d;
	 float e;

	printf("size of char: %lu bytes(s)\n", sizeof(a));
	printf("size of intr: %lu bytes(s)\n", sizeof(b));
	printf("size of long intr: %lu bytes(s)\n", sizeof(d));
	printf("size of long long intr: %lu bytes(s)\n", sizeof(d));
        printf("size of floatr: %lu bytes(s)\n", sizeof(e));
	return(0);
}	
