#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: pointer to allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;
	if (n >= b)
		n = b;
	ptr = malloc((a + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);

	for (i = 0; i < a; i++)
		ptr[i] = s1[i];
	for (; i < (a + n); i++)
		ptr[i] = s2[i - a];
	ptr[i] = '\0';

	return (ptr);
}
