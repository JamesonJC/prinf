#include "main.h"

/**
 * _printf - The functions write to the output stream to print out.
 * @format: The string and the formats to be diplaced on screen.
 * Return: Number of characters written in the stream stdout.
 */

int _printf(const char *format, ...)
{
	va_list l_args;
	unsigned int i = 0, tot_char = 0;

	if (format == NULL)
		return (-1);

	va_start(l_args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		} else if (format[i + 1] == '%')
		{
			_putchar(format[i]);
			i++;
		} else if (format[i + 1] == 's' || format[i + 1] == 'c')
		{
			tot_char += handle_chars(format, l_args, i);
			i++;

		} else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			tot_char += handle_ints(l_args);
			i++;
		}
		tot_char += 1;
	}
	return (tot_char);
}
