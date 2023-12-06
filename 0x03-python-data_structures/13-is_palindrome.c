#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int compare_lists(listint_t *head1, listint_t *head2);
void reverse_list(listint_t **head);

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the linked list
 * Return: 1 if the linked list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return (1);

    listint_t *slow = *head, *fast = *head;
    listint_t *prev_slow = *head;
    listint_t *second_half, *mid_node = NULL;
    int is_palindrome = 1;

    // Move fast to the end and slow to the middle
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }

    // Handle odd length list
    if (fast != NULL)
    {
        mid_node = slow;
        slow = slow->next;
    }

    // Reverse the second half of the list
    second_half = slow;
    prev_slow->next = NULL;
    reverse_list(&second_half);

    // Compare the first and second halves
    is_palindrome = compare_lists(*head, second_half);

    // Restore the original list by reversing the second half again
    reverse_list(&second_half);

    // Connect the first and second halves back
    if (mid_node != NULL)
    {
        prev_slow->next = mid_node;
        mid_node->next = second_half;
    }
    else
    {
        prev_slow->next = second_half;
    }

    return is_palindrome;
}

/**
 * reverse_list - reverses a linked list
 * @head: pointer to the head of the linked list
 */
void reverse_list(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

/**
 * compare_lists - compares two linked lists
 * @head1: pointer to the head of the first linked list
 * @head2: pointer to the head of the second linked list
 * Return: 1 if the lists are equal, 0 otherwise
 */
int compare_lists(listint_t *head1, listint_t *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->n != head2->n)
            return 0;

        head1 = head1->next;
        head2 = head2->next;
    }

    return 1;
}
