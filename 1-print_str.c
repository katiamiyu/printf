#include "main.h"
/**
 * print_str - displays char array elements
 * @str: parameter as array
 * Return: length of array
 */
int print_str(char *str)
{
	if (str == NULL)
	{
		_puts("(null)");
		return (_strlen("(null)"));
	}
	_puts(str);
	return (_strlen(str));

}
