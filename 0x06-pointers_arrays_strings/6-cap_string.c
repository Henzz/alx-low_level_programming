#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @ch:array of char
 *
 * Return: capitalized array of char.
 */
char *cap_string(char *ch)
{
	int length, separators_size, i, j;
	char separators[12];

	separators[0] = ' ';
	separators[1] = '\n';
	separators[2] = ',';
	separators[3] = ';';
	separators[4] = '.';
	separators[5] = '!';
	separators[6] = '?';
	separators[7] = '"';
	separators[8] = '(';
	separators[9] = ')';
	separators[10] = '{';
	separators[11] = '}';
	length = strlen(ch);
	separators_size = sizeof(separators);
	for (i = 0; i <= length; i++)
	{
		for (j = 0; j < separators_size; j++)
		{
			if (i == 0)
			{
				*(ch + i) = toupper(ch[i]);
			}
			if (ch[i] == separators[j])
			{
				*(ch + (i + 1)) = toupper(ch[i + 1]);
			}
			if (ch[i] == '\t')
			{
				*(ch + (i)) = ' ';
				*(ch + (i + 1)) = toupper(ch[i + 1]);
			}
		}
	}
	return (ch);
}
