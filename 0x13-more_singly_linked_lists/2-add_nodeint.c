#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
