#include "lists.h"
/**
 * find_listint_loop - finds the loop contained
 *                     in a linked list
 * @head : pointer to the head of the linked list
 * Return: pointer the node where the loop starts,
 *         or NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	1st_node = head->next;
	2nd_node = (head->next)->next;

	while (2nd_node)
	{
	if (1st_node == 2nd_node)
	{
	1st_node = head;

	while (1st_node != 2nd_node)
	{
	1st_node = 1st_node->next;
	2nd_node = 2nd_node->next;
	}

	return (1st_node);
	}

	1st_node = 1st_node->next;
	2nd_node = (2nd_node->next)->next;
	}

	return (NULL);
}
