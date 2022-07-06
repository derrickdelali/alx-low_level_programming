#include"main.h"

/**
 * print_last_digit - checks number
 *
 * @j: Takes input
 *
 * Return: 
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;
	
	if (i < 0)
	{
		i*= -1;
	}
	_putchar(i + '0');
	return (i);
