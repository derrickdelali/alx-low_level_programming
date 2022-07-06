#include"main.h"

/**
 * print_sign - checks numbers
 * @n: takes input
 * Return: 1 if n is true
 */

int printsign(int n)
{
	if(n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if ( n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
