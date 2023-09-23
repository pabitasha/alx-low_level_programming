#include "lists.h"
/**
 * print_listint : prints all the elements of linked list
 * @h: head of list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *curso = h;
	size_t cnt = 0;

	while (curso != NULL)
	{
		printf("%d\n", curso->n);
		cnt += 1;
		curso = curso->next;
	}
	return (cnt);
}
