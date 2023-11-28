#include "lists.h"

/**
 * check_cycle - a function that checks if a singly linked list has a cycle in it
 * @list: the linked list to be checked
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *tmp = list;
	listint_t *tmp2 = list;

	while (tmp2 && tmp2->next)
	{
		tmp2 = tmp2->next->next;
		tmp = tmp->next;
		if (tmp == tmp2)
			return (1);
	}
	return (0);
}
