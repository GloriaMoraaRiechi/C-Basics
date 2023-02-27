#include "main.h"
/**
* _strlen - return the length of a string
* @s: string whose length is to be determined
* Return: length of string s
*/
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '0')
	{
		m++;
	}

	return (m);
}
