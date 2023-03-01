#include "main.h"
#include <string.h>
/**
* *_strcat - function that concatenates two strings.
* @dest: first parameter
* @src: second parameter
* This function appends the src string to the dest string
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (dest[length])
		length++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length += 1;
	}
	dest[length] = '\0';

	return (dest);

}
