#include "lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *c;

	a = NULL;
	c = NULL;

	while (*head != NULL)
	{
		c = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = c;
	}

	*head = a;
	return (*head);


