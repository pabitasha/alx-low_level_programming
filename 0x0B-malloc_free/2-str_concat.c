#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int a, x;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";
a = x = 0;

while (s1[a] != '\0')
a++;

while (s2[x] != '\0')
x++;
conct = malloc(sizeof(char) * (a + x + 1));

if (conct == NULL)
return (NULL);
a = x = 0;

while (s1[a] != '\0')
{
conct[a] = s1[a];
a++;
}
while (s2[x] != '\0')
{
conct[a] = s2[x];
a++,
x++;
}
conct[a] = '\0';
return (conct);
}
