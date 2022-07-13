#include <stdio.h>
/**
 * reverse_array - write the c to stdout
 * @a: print c
 * @n: dfsd
 * Return: On success
 * On error, -1 is returned and zero set appropriately
 */
void reverse_array(int *a, int n)
{
	int b = 0, c = 0;
	int d[20];

	n--;
	while (b <= n)
	{
		d[n - b] = a[b];
		b++;
	}
	while (c <= n)
	{
		a[c] = d[c];
		c++
	}
}
