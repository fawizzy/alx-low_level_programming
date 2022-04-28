#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: number in binary to convert
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int num = 0;

	if (b[len] == '\0')
		return (0);

	while (b[len])
	{
		if (b[len] == '1' || b[len] == '0')
		{
			num = num << 1;
			num += b[len] - '0';
			len++;
		}
		else
			return (0);
	}
	return (num);
}
