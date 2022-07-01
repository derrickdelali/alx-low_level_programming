#include <stdio.h>

/**
 * main - entry
 *
 * description: print all possible combinations of 3 digit numbers
 *
 * return: Zero always
 *
 */

int main(void)
{
	int ones = 0;
	int tens;
	int hundreds;

	while (ones <= 9)
	{
		tens = 0;
		while (tens <= 9)
		{
			hundreds = 0;
			while (hundreds <= 9)
			{
				if (ones != tens && ones < tens && tens != hundreds && tens < hundreds)
				{
					putchar(ones + 48);
					putchar(tens + 48);
					putchar(hundreds + 48);

					if (ones + tens + hundreds != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++hundreds;
			}
			++tens;
		}
		++ones;
	}
	putchar('\n');
	return (0);

}
