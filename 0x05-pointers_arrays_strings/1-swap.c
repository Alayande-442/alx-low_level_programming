#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap integers
 *
 * @x: - number to swap
 * @y: second number to swap
 */

void swap_int(int *x, int *y)
{
	int m;

	m = *x;
	*x = *y;
	*y = m;

}
