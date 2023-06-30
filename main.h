#ifndef MAIN_H
#define MAIN_H

/*Libraries*/
#include <unistd.h>
#include <stdarg.h>


/*Function prototypes*/
int _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int count_digits(int num);
int handle_chars(const char *format, va_list l_args, int i);
int handle_ints(va_list l_args);

#endif
