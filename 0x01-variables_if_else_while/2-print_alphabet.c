#include <stdio.h>
#include <stdlib.h>

/**
 * main - write a code to print alphabet
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar("%c ");
	}
	putchar("\n");
	return 0;
}
