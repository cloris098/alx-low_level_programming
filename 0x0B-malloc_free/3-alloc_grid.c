#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 * @width: width of the 2-dimensional array.
 * @height: height of the 2-dimensional array.
 * Return: NULL if width < 1, height < 1
 *         else a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **twod;

	if (width <= 0 || height <= 0)
		return (NULL);

	twod = malloc(sizeof(int *) * height);

	if (twod == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		twod[h] = malloc(sizeof(int) * width);

		if (twod[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(twod[w]);
			free(twod);
			return (NULL);
		}

		for (w = 0; w < width; w++)
		{
			twod[h][w] = 0;
		}
	}

	return (twod);
}
