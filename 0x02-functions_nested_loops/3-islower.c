#include"main.h"

/**
 * _islower - function to check lowercase
 *
 * @c: check input
 *
 * Return: Return 1 if c is a lowercase otherwise a zero
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
