#include <stdio.h>

/**
 * _strlen - mahmoud
 * @str: ok
 * Return: The length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
