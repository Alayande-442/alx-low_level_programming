#include <stdio.h>

/**
* main - task
* Return: Always 0
*/

int main(void)
{
	int num;
	for (num = 0; num <= 9; num++)
		puchar(num + '0');

	putchar('\n');
	return (0);
}
