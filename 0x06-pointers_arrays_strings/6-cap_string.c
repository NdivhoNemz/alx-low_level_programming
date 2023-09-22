#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string..
 * @str: capitalized string
 * Return: A pointer to capitalised string.
 */

char *cap_string(char *str)
{
	int elements = 0;

	while (str[elements])
	{
		while (!(str[elements] >= 'a' && str[elements] <= 'z'))
			elements++;

		if (str[elements - 1] == ' ' ||
		    str[elements - 1] == '\t' ||
		    str[elements - 1] == '\n' ||
		    str[elements - 1] == ',' ||
		    str[elements - 1] == ';' ||
		    str[elements - 1] == '.' ||
		    str[elements - 1] == '!' ||
		    str[elements - 1] == '?' ||
		    str[elements - 1] == '"' ||
		    str[elements - 1] == '(' ||
		    str[elements - 1] == ')' ||
		    str[elements - 1] == '{' ||
		    str[elements - 1] == '}' ||
		    elements == 0)
			str[elements] -= 32;

		elements++;
	}

	return (str);
}
