#include <stdio.h>

/**
 * main - entry
 *
 * description: print alphabets in a lowercase
 *
 * retun: 0
 *
 */

int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}