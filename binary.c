#include "main.h"

/**
 * itob - change int to binary
 * @list: int to change
 * Return: string with binary
 */

char *itob(va_list list)
{
	int j = 0, twos = 1;
	int i, k;
	char *s;

	k = va_arg(list, int);
	i = k;

	s = malloc(sizeof(char) * 33);
	if (s == NULL)
		return (NULL);

	if (k < 0)
	{
		s[0] = 1 + '0';
		j++;
		k *= -1;
		i *= -1;
	}

	while (k > 1)
	{
		k /= 2;
		twos *= 2;
	}

	while (twos > 0)
	{
		s[j++] = (i / twos + '0');
		i %= twos;
		twos /= 2;
	}
	s[j] = '\0';

	return (s);
}
