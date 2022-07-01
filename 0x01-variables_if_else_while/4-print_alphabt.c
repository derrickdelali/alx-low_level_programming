#include <stdio.h>

/**
 * main - Entry
 *
 * description: print alphabets in lowercase
 *
 * Return: zero always
 *
 */

int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i != 'e') && (i != 'q'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
