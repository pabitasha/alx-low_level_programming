#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currNode;
	size_t c;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);

	for (c = 0; str[c]; c++)
	{
	newNode->len = c;
	newNode->next = NULL;
	currNode = *head;
	if (currNode == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (currNode->next != NULL)
			currNode = currNode->next;
		currNode->next = newNode;
	}
	}
	return (*head);
}
