#include "holberton.h"

int existchar(char *str, char c);

/**
 * wildcmp - function that compares two strings
 * @s1: String surce
 * @s2: String or pattern to find
 * Return: 1 if find it or 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
		return (TRUE);
	else if (*s1 == '\0' || *s2 == '\0')
		return (FALSE);

	if (*s1 == *s2)
		s1++, s2++;
	else if (*s2 == '*' && *(s2 + 1) == '*')
		s2++;
	else if (*s1 != *s2 && *s2 == '*')
	{
		if (*s1 == *(s2 + 1) && !existchar(s1 + 1, *s1))
			s2++;
		else if (*(s1 + 1) == *(s2 + 1))
			s2++, s1++;
		else
			s1++;
	}
	else if (*s1 != *s2)
		return (FALSE);

	return (wildcmp(s1, s2));
}

/**
 * existchar - function that look for a char in a string
 * @str: String surce
 * @c: Character to find
 * Return: 1 if find it or 0 if not
 */
int existchar(char *str, char c)
{
	if (*str == '\0')
		return (FALSE);
	if (*str == c)
		return (TRUE);
	return (existchar (++str, c));
}
