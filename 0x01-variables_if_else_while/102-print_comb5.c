#include <stdio.h>

/**
 * main - entry
 *
 * description: print two two digit numbers combinations
 *
 * Return: zero always
 */

int main(void)
{
	int ones = 0;
	int tens;

	while (ones <= 99)
	{
		tens = ones;
		while (tens <= 99)
		{
			if (tens != ones)
			{
				putchar((ones / 10) + 48);
				putchar((ones % 10) + 48);
				putchar(' ');
				putchar((tens / 10) + 48);
				putchar((tens % 10) + 48);

				if (ones != 98 || tens != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++tens;
		}
		++ones;
	}
	putchar('\n');
	return (0);
}
