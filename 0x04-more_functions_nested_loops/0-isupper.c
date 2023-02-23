#include "main.h"
/**
* _isupper - checks for the uppercase character
* @c: is the character to be checked
* Return: 1if c is uppercase otherwise 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 80)
	{
		return (1);
	}
	return (0);
}
