#include "main.h"

/**********/

int  _puts(char *str)
{
	int i = 0;

	if (*str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 1;
		}
	}
	return (i);
}

/**************/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
