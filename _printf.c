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
	char *s;

	va_start(l_args, format);
	s = va_arg(l_args, char *);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		} else if (format[i + 1] == '%')
		{
			_putchar(format[i]);
			i++;
		} else if (format[i + 1] == 's')
		{
			tot_char += _puts(s);
			tot_char -= 1;
			i++;
		} else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(l_args, int));
			i++;
		}
		tot_char += 1;
	}
	return (tot_char);
}
