#include <stdarg.h>
#include "main.h"
/**
 * _printf - emulates the c program printf
 * @format: string containing the format text
 * Return: length of the output
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int counter = 0, x = 0;

	va_start(list, format);
	for (; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == 'c')
				counter += _putchar(va_arg(list, int));
			if (format[x + 1] == 's')
				counter += print_str(va_arg(list, char*));
			if (format[x + 1] == '%')
				counter += _putchar('%');
			x += 1;
		}
		else
			counter += _putchar(format[x]);
	}
	va_end(list);
	return (counter);
}
