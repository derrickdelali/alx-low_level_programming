#include <stdio.h>

/**
 * main - Entry
 *
 * description: print all possible combinations of single digit numbers
 *
 * Return: zero always
 *
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			i++;
		}
	}
	return (0);
}
