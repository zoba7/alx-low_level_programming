0-strcat.c
#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: return a concanete strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i++] = src[j];
		j++;
	}

	return (dest);
}
