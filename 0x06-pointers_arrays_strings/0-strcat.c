#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
 */
void *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	dest = '\0';
	return (temp);
}
