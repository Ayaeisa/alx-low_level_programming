#include "main.h"

/**
 * _strcmp - compare
 * @s1: a pointer
 * @s2: a pointer to the second
 * Return: If str1 < str2, the negative difference
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
