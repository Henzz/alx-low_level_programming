/**
 * _strlen_recursion - counts the number of characters in a string
 * @s: the string to be counted
 *
 * Return: number of characters counted
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
