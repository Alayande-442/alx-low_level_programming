#include "main.h"

/**main - to check if a character is a digit or otherwise
 *
 * @c:the character to checked
 * Return:1 if @C is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
