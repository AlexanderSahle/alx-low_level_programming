#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 *
 * @width: width input
 *
 * @height: height input
 *
 * Return: pointer to 2 dim. array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **alex;
	int p, q;

	if (width <= 0 || height <= 0)
		return (NULL);

	alex = malloc(sizeof(int *) * height);

	if (alex == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		alex[p] = malloc(sizeof(int) * width);

		if (alex[p] == NULL)
		{
			for (; p >= 0; p--)
				free(alex[p]);

			free(alex);

			return (NULL);
		}
	}

	for (p = 0; p < height; p++)
	{
		for (q = 0; q < width; q++)
			alex[p][q] = 0;
	}
	return (alex);
}
