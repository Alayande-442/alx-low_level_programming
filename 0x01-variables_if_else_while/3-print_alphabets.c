#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 * folloed by new line
 * Return: Always 0 (success)
 */

int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
		putchar(lw);

	for (lw = 'A'; lw <= 'Z'; lw++)
		putchar(lw);

	putchar('\n');
	return 0;
}
