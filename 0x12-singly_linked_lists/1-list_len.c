#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes_Count;

	nodes_Count = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes_Count++;
	}
	return (nodes_Count);
}
