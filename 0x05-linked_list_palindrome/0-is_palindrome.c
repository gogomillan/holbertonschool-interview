#include "lists.h"

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: Head of the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
int list[1000000];
long n = 1, i;
listint_t *forw;

	if (head == NULL || *head == NULL)
		return (1);
	if ((*head)->next == NULL)
		return (1);

	forw = *head, n = 0;
	while (forw != NULL)
		list[n] = forw->n, forw = forw->next, n++;

	for (i = 0; i < (n / 2); i++)
	{
		if (list[i] != list[n - i - 1])
			return (0);
	}

	return (1);
}
