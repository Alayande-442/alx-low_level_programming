#include <stdio.h>

/**
 * main - print alphabet in lower excluding q and e
 * Return: Always 0
 */

int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		if (lw != 'q' && lw != 'e')
			putchar(lw);
	}

	putchar('\n');
	return (0);
}
