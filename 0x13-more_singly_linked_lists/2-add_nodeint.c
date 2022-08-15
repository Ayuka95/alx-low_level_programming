#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning of a listint_h
 * list
 *
 * @head: pointer to the address of the head of listint_t list
 * @n: integer for the new node to contain
 *
 * Return: NULL if function fails. Otherwise, address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
