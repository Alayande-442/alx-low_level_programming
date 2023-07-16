#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 * folloed by new line
 * Return: Always 0 (success)
 */

int main(void)
{
	char lw;
	char up;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		putchar(lw);
	}
	putchar('\n');


	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return 0;
}
