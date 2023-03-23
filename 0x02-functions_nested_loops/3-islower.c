#include "main.h"

/**
 * islower - checks if character is lowercase
 * @c: the character to be checked
 * Return: 1 for lowercase character, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
