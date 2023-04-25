#include "main.h"
/**
 * print_int - print integer value
 * @i: integer parameter
 * Return: integer value
 */
int print_int(int i)
{
	char buffer[32];
	unsigned int counter = 0;
	int x = 0;

	if (i == 0)
	{
		counter += _putchar('0' + 0);
	}
	else if (i < 0)
	{
		counter += _putchar('-');
		i *= -1;
	}
	while (i != 0)
	{
		buffer[x] = i % 10;
		i /= 10;
		x += 1;
	}
	x -= 1;
	while (x >=  0)
	{
		_putchar('0' + buffer[x]);
		counter += 1;
		x -= 1;
	}
	return (counter);
}
