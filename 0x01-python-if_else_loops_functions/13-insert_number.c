#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - function that inserts a number into a sorted linked list
 * @head: the sorted singly linked list
 * @number: The number to inserts
 *
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tmp;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = number;
	tmp = *head;

	if (*head == NULL || number < (*head)->n)
	{
		new->next = *head;
		*head = new;
	}

	while (tmp->next && tmp->next->n < number)
		tmp = tmp->next;

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
