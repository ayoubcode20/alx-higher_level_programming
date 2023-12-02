#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - function that inserts a number into a sorted linked list.
 * @head: The sorted linked list
 * @number: The number to insert
 *
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tmp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = number;

	if (*head == NULL || (*head)->n > number)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}

	while (tmp->next->n < number && tmp->next)
		tmp = tmp->next;

	new->next = tmp->next;
	tmp->next = new;
	return (new);

}
