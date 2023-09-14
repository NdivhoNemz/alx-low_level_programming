#include "main.h"

/**
 * _isupper(int c) - a function that checks for uppercase character.
 * @c: character checked
 * Return: 1 if uppercase or 0 if other wise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
