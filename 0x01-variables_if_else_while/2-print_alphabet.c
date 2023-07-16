#include <stdio.h>
#include <stdlib.h>

/**
 * main - write a code to print alphabet
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar("%s ", alphabet);
	}
	putchar("\n");
	return 0;
}
