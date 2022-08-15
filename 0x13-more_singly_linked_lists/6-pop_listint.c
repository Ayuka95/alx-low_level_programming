#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 *
 * @head: head of the list
 *
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *h, *current;

	if (*head == NULL)
		return (0);
	current = *head;
	h_node = current->n;
	h = current->next;
	free(current);
	*head = h;
	return (h_node);
}
