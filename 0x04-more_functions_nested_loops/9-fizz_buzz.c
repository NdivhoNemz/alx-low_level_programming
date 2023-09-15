#include "main.h"
#include <stdio.h>

/**
 * main -  a program that prints the numbers from 1 to 100.
 * multiples of three print Fizz
 * the multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (numbers % 3 == 0 && numbers % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (numbers % 5 == 0 && numbers % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (numbers % 3 == 0 && numbers % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (numbers == 1)
		{
			printf("%d", numbers);
		}
		else
		{
			printf(" %d", numbers);
		}
	}
	printf("\n");
	return (0);
}
