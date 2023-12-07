#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @ch:array of char
 *
 * Return: encoded array of char.
 */
char *leet(char *ch)
{
	int length, separators_size, i, j;
	char separators[5], numbers[5];

	separators[0] = 'a';
	separators[1] = 'e';
	separators[2] = 'o';
	separators[3] = 't';
	separators[4] = 'l';
	numbers[0] = '4';
	numbers[1] = '3';
	numbers[2] = '0';
	numbers[3] = '7';
	numbers[4] = '1';
	length = strlen(ch);
	separators_size = sizeof(separators);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < separators_size; j++)
		{
			if (ch[i] == separators[j] || ch[i] == toupper(separators[j]))
			{
				*(ch + i) = numbers[j];
			}
		}
	}
	return (ch);
}
