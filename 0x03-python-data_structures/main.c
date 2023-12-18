#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *reverse_list(listint_t *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	listint_t *rest = reverse_list(head->next);
	head->next->next = head;
	head->next = NULL;
	
	return rest;
}


void print(listint_t *head)
{
	if (!head)
	{
		printf("\n");
		return;
	}
	printf("%d ", head->n);
	print(head->next);
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 50);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 108);
    add_nodeint_end(&head, 500);
    add_nodeint_end(&head, 972);
    add_nodeint_end(&head, 1007);
    add_nodeint_end(&head, 2000);
    print(head);

    printf("\n-----------\n");

    head = reverse_list(head);
    print(head);

    free_listint(head);

    return (0);
}
