#include "main.h"
#include <string.h>
/**
* _strncat -  function that concatenates two strings
* @dest: first parameter
* @src: second parameter
* @n: bytes to be used from src
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
