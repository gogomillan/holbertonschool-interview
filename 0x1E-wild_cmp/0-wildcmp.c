#include "holberton.h"
#include <stdio.h>

int existchar(char *str, char c);

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

int existchar(char *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (TRUE);
	return (FALSE);
}
