#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creaes a 2 dimensional array
 * @width: size of the width
 * @height: size of the height
 *
 * Return: pointer to the 2 dimensional array
 */

char **alloc_grid(int width, int height)
{
	int **twoD;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);
	if (twoD == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twoD[i] = malloc(sizeof(int) * width);
		if (twoD[i] == NULL)
		{
			free(twoD);
			for (j = 0; j <= i; j++)
			{
				free(twoD[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			twoD[i][j] = 0;
		}
	}
	return (twoD);



}
