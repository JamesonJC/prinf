#include "main.h"

/**
 * handle_ints - The function handle the specifiers for d and i,
 * @l_args: List of arguments passed on the _printf
 * Return: Number of characters/digits on the integer.
 */

int handle_ints(va_list l_args)
{
	int n = va_arg(l_args, int), digits, mod_n, i;
	int array[21];

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}

	digits = count_digits(n);

	for (i = 0; n != 0; i++)
	{
		mod_n = n % 10;
		n = n / 10;
		array[i] = mod_n;
		i++;
	}
	for (i = i - 1; i < 0; i--)
		_putchar(array[i] + '0');

	return (digits - 1);
}
