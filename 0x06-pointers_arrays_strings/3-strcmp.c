#include "mydas.h"
/**
 * _strcmp - Write c to stdout
 * @s1: Print c
 * @s2: dsfs
 * Return: Success
 * On error, -1 is returned and 0 is set appropriately
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
