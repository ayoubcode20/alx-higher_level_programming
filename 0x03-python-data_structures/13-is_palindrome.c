#include "lists.h"

/**
 * find_length - finds the length of a linked list
 * head: the singly linked list
 *
 * Return: The length
*/
int find_length(listint_t *head)
{
	int length = 0;

	listint_t *current = head;
	while (current != NULL)
	{
		length++;
		current = current->next;
	}

	return length;
}

/**
 * is_palindrome - function that checks if a singly linked list is a palindrome
 * @head: The singly linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/
int is_palindrome(listint_t **head)
{
	listint_t *tmp1 = *head;
	listint_t *tmp2 = *head;
	int size = find_length(*head);
	int i, j;

	if (size < 2)
		return (1);

	for (i = 1; i <= size / 2; i++)
	{
		tmp2 = *head;
		for (j = 0; j < size - i; j++)
		{
			tmp2 = tmp2->next;
		}
		if (tmp2->n != tmp1->n)
			return (0);
		tmp1 = tmp1->next;
	}
	return (1);
}
