#include "main.h"

/**
 * handle_chars - Handle the specifier for s and c.
 * @format: The a string with format of the output.
 * @l_args: The list of arguments passed on _printf.
 * @i: The count int used to check specifier in front of %.
 * Return: Total number of characters.
 */

int handle_chars(const char *format, va_list l_args, int i)
{
	int chars = 0;

	switch (format[i + 1])
	{
		case 'c':
			{
				_putchar((char) va_arg(l_args, int));
				break;
			}
		case 's':
			{
				chars += _puts(va_arg(l_args, char *));
				chars -= 1;
				break;
			}
	}
	return (chars);
}
