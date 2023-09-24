#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given
 *                           index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 *         (indices starting at 0)
 * Return: 1 - if function succeeds,
 *        -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempo, *copy_n = *head;
unsigned int node;

if (copy_n == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(copy_n);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (copy_n->next == NULL)
return (-1);

copy_n = copy_n->next;
}

tempo = copy_n->next;
copy_n->next = tempo->next;
free(tempo);
return (1);
}
