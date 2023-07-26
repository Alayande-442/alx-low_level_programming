#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculate lenght of string
 *
 * @s: string
 *
 * Return: lwnght of the string
 */

int _strlen(char *s)
{
    int length = 0;

    if (s == NULL)
        return 0;

    while (s[length] != '\0')
        length++;

    return length;
}
