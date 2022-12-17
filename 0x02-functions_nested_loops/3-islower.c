#include "main.h"

/**
 * _islower - checks if a character is lower case
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if it is uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
