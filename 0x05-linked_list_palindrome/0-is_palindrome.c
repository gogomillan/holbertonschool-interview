#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: listint_t pointer to the list's head
 * Return: 1 if is a palindrom, 0 if not
 */
int is_palindrome(listint_t **head)
{
	size_t n = 1;	/* Number of nodes */
	listint_t *tmp = *head, *new = NULL, *rev = NULL;

	if (head == NULL && *head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	new->n = tmp->n;
	new->next = NULL;
	rev = new;

	/* Get the lenght and reversed list */
	while (tmp->next != NULL)
	{
		n++;
		tmp = tmp->next;
		new = malloc(sizeof(listint_t));
		new->n = tmp->n;
		new->next = rev;
		rev = new;
	}

	/* Iterate both lists looking for a difference */
	n = n / 2;
	tmp = *head;
	new = rev;
	while (n)
	{
		if (tmp->n != new->n)
		{
			free_listint(rev);
			return (0);
		}
		tmp = tmp->next;
		new = new->next;
		n--;
	}
	free_listint(rev);
	return (1);
}
