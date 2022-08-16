#include "lists.h"

/**
 * *get_nodeint_at_index - function that gets the nth node of a listint_t
 * linked list
 *
 * @head: head of list
 * @index: node index
 *
 * Return: nth node. NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
