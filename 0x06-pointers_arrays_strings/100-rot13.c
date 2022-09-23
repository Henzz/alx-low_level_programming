#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @ch: character to be rotated
 *
 * Return: encoded string.
 */
char *rot13(char *ch)
{
	int length, i;

	length = strlen(ch);
	for (i = 0; i < length; i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z')
		{
			if (ch[i] + 13 <= 'Z')
			{
				ch[i] = ch[i] + 13;
			}
			else
			{
				ch[i] = ch[i] - 13;
			}
		}
		else if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			if (ch[i] + 13 <= 'z')
			{
				ch[i] = ch[i] + 13;
			}
			else
			{
				ch[i] = ch[i] - 13;
			}
		}
	}
	return (ch);
}
