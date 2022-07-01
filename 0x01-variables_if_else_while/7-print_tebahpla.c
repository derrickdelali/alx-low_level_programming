#include <stdio.h>

/**
 * main - entry
 *
 * description: print lowecase alphabets in reverse
 *
 * Return: Zero always
 *
 */

int main(void)
{
	char i = 'z';

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
