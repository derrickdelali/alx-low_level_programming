#include <stdio.h>

/**
 * main - Entry
 *
 * Description: Print alphabets in lowercae and uppercase
 *
 * retun: zero always
 *
 */

int main(void)
{
	char i = 'a';
        char j = 'A';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
