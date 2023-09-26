#include "lists.h"
/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *tempo;
	listp_t *currnt;

	if (head != NULL)
	{
		currnt = *head;
		while ((tempo = currnt) != NULL)
		{
			currnt = currnt->next;
			free(tempo);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *hpt, *new_node, *sum;
	listint_t *currnt;

	hpt = NULL;
	while (*h != NULL)
	{
	new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

			new_node->p = (void *)*h;
		new_node->next = hpt;
		hpt = new_node;

		sum = hpt;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hpt);
				return (nodes);
			}
		}

		currnt = *h;
		*h = (*h)->next;
		free(currnt);
		nodes++;
	}

	*h = NULL;
	free_listp2(&hpt);
	return (nodes);
}
