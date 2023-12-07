#include <string.h>

/**
 * isPalRec - checks if a string is palindrome or not.
 * @str: the string to be checked
 * @s: the start position
 * @e: the length of the string str
 *
 * Return: returns 1 for palindrome or 0 if not.
 */
int isPalRec(char str[], int s, int e)
{
	/* If there is only one character */
	if (s == e)
		return (1);

	/*
	 * If first and last
	 * characters do not match
	 */
	if (str[s] != str[e])
		return (0);

	/*
	 * If there are more than
	 * two characters, check if
	 * middle substring is also
	 * palindrome or not.
	 */
	if (s < e + 1)
		return (isPalRec(str, s + 1, e - 1));

	return (1);
}

/**
 * is_palindrome - checks if a string is palindrome.
 * @s: string to be checked.
 *
 * Return: returns 1 if its palindrome or 0 if not.
 */
int is_palindrome(char *s)
{
	int n = strlen(s);

	/*
	 * An empty string is
	 * considered as palindrome
	 */
	if (n == 0)
		return (1);

	return (isPalRec(s, 0, n - 1));
}
