#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *addblock;
	int counter1, counter2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	counter1 = counter2 = 0;
	while (s1[counter1] != '\0')
	{
		counter1++;
	}
	while (s2[counter2] != '\0')
	{
		counter2++;
	}
	addblock = malloc(sizeof(char) * (counter1 + counter2 + 1));
	if (addblock == NULL)
	{
		return (NULL);
	}
	counter1 = counter2 = 0;
	while (s1[counter1] != '\0')
	{
		addblock[counter1] = s1[counter1];
		counter1++;
	}
	while (s2[counter2] != '\0')
	{
		addblock[counter1] = s2[counter2];
		counter1++, counter2++;
	}
	addblock[counter1] = '\0';
	return (addblock);
}

/**
 * addblock -points first character of the address block in the conc string
 * @counter1: used to keep track current position in the concatenated string
 * @counter2: used to keep track of the current position in the second string
 */

/* s2= "" sets pointer s1 to point an empty string if s1 was initially NULL */
/* s1= "" sets pointer s1 to point an empty string if s1 was initially NULL */
