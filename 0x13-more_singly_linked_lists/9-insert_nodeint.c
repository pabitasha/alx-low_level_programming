#include "lists.h"
/**
 * insert_nodeint_at_index : adds new node to linked list
 *                           at a given position
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : value for the new node to be added
 * Return: pointer to the new node,
 *         or NULL : if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *tempo = *head;
unsigned int node;

new = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = tempo;
*head = new_node;
return (new_node);
}

for (node = 0; node < (idx - 1); node++)
{
if (tempo == NULL || tempo->next == NULL)
return (NULL);

tempo = tempo->next;
}

new_node->next = tempo->next;
tempo->next = new_node;

return (new_node);
}
