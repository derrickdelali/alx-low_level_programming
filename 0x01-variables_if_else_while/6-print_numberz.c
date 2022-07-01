#include <stdio.h>

/**
 * main - Entry
 *
 * description: print numbers of base 10 starting from 0
 *
 * Return: always zero
 *
 */

int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
