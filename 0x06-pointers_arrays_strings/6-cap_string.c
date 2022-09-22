#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @ch:array of char
 *
 * Return: capitalized array of char.
 */
char *cap_string(char *ch)
{
	int length, i;

	length = strlen(ch);
	for (i = 0; i < length; i++)
	{
		if (i == 0)
		{
			*(ch + i) = toupper(ch[i]);
		}
		if (ch[i] == ' ' || ch[i] == '.' || ch[i] == '\n')
		{
			*(ch + (i + 1)) = toupper(ch[i + 1]);
		}
		if (ch[i] == '\t')
		{
			*(ch + (i)) = ' ';
			*(ch + (i + 1)) = toupper(ch[i + 1]);
		}
	}
	return (ch);
}
