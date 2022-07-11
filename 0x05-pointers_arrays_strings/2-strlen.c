#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: The string
 *
 * Return: The string as an integer number
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
