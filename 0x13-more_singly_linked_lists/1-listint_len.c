#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linkedint_t
 * list
 *
 * @h:pointer to the head of the linked_int list
 *
 * Return: number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
