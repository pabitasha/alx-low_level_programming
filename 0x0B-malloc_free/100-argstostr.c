#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */
char *argstostr(int ac, char **av)
{
char *c, *retpnt;
int i, x, result;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0, result = 0; i < ac; i++)
{
for (x = 0; *(*(av + i) + x) != '\0'; x++, result++)
result++;
}
result++;

c = malloc(result * sizeof(char));
if (c == NULL)
return (NULL);

retpnt = c;
for (i = 0; i < ac; i++)
{
for (x = 0; av[i][j] != '\0'; x++)
{
*c = av[i][x];
c++;
}
*c = '\n';
c++;
}
return (retpnt);
}
