#include "lists.h"
/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *curso = h;
	size_t counter = 0;

	while (curso != NULL)
	{
		counter += 1;
		curso = curso->next;
	}
	return (counter);
}
