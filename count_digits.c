#include "main.h"

/**
 * count_digits - Counts the number of digits on an integer.
 * @num: The integer to be counted.
 * Return: Total number of digits on an integer.
 */

int count_digits(int num)
{
	int i = 0;

	if (num == 0)
	{
		_putchar(num + '0');
		return (1);
	}

	for (i = 0; num != 0; i++)
	{
		num = num / 10;
	}
	return (i);
}
