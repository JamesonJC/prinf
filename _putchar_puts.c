#include "main.h"

/**
 * _puts - Print charaters on the screen, without considering formats.
 * @str: Pointer to the caharacter to be printed.
 * Return: Number of characters printed.
 */

int  _puts(char *str)
{
	int i = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 1;
		}
	}
	return (i);
}

/**
 * _putchar - Write character to stdout stream. to be printed.
 * @c: Character to be written to stdout.
 * Return: The ASCII value of the charater.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
