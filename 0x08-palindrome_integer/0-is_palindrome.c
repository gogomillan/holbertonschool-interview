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

	for (iter = 0; n; iter++)
	{
		num[iter] = n % 10;
		n = n / 10;
	}
	num[iter] = '\0';
	total = iter;

	for (iter = 0; iter < (total / 2); iter++)
		if (num[iter] != num[total - 1 - iter])
			return (0);
	return (1);
}
