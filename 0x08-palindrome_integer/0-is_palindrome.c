#include "palindrome.h"

/**
 * is_palindrome - checks whether or not a given n integer is a palindrome.
 * @n: The unsigned long integer
 * Return: 1 if palindome or 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	char num[50];
	int iter, total;

	/* Put the number in array */
	for (iter = 0; n; iter++)
	{
		num[iter] = n % 10;
		n = n / 10;
	}
	num[iter] = '\0';
	/* Go through the string to identify the palindrome */
	total = iter;
	for (iter = 0; iter < (total / 2); iter++)
		/* If borders are diferent, then no palindrome */
		if (num[iter] != num[total - 1 - iter])
			return (0);
	/* Else is a palindrome */
	return (1);
}
