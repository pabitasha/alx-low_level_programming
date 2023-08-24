#include "main.h"
/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;

a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '/0';
a++;
}
return (dest);
}
