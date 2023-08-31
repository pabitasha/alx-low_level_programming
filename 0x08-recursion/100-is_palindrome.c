#include "main.h"
/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int get_len(char *s);
	int my_palind(char *s, int x);
	int len;

	len = get_len(s) - 1;

	return (my_palind(s, --len));
}

/**
 * get_len - gets length of string
 * @s: string
 * Return: return length of string
 */

int get_len(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_len(++s));
}

/**
 * my_pal - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int my_pal(char *s, int x)
{
	if (*s == *(s + x))
	{
		if (x <= 0)
			return (1);
		else
			return (my_palind(++s, x - 2));
	}
	else
		return (0);
}
