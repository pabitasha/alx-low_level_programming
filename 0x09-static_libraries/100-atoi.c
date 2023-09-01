#include "main.h"
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
 	int sign_Here = 1, d = 0;
 	unsigned int resi = 0;

 	while (!(s[d] <= '9' && s[d] >= '0') && s[d] != '\0')
 	{
 		if (s[d] == '-')
 			sign _Here*= -1;
 		d++;
 	}
 	while (s[d] <= '9' && (s[d] >= '0' && s[d] != '\0'))
 	{
 		resi = (resi * 10) + (s[d] - '0');
 		d++;
 	}
 	resi *= sign_Here;
 	return (resi);
 }

