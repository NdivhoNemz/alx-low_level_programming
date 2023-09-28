#include "main.h" /* new prototypes to be added */

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome.
 * @s: string to be checked and reversed.
 * Return: 1 if it is, 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_if_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string recursively.
 * @s: length of string to be calculated
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_if_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @a: iterator integer
 * @b: length of the string
 * Return: 1 if palindrome, 0 if otherwise
 */

int check_if_palindrome(char *s, int a, int b)
{
	if (*(s + a) != *(s + b - 1))
	{
		return (0);
	}
	if (a >= b)
	{
		return (1);
	}
	return (check_if_palindrome(s, a + 1, b - 1));
}

/* Two prototypes declared first to make them global variables */
/* This allows to make use in any codeblock */
