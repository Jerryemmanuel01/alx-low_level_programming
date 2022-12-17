#include "main.h"
/**
 * _isalpha - checks if the character is a alphabet
 * @c: is the character
 * Return: returns 1 if c is a letter, else returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
