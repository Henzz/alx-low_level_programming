/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns 1 if the strings can be considered identical,
 * otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	/* Both strings end together */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/*
	 * Make sure that the characters after '*' are present
	 * in second string. This function assumes that the
	 * first string will not contain two consecutive '*'
	 */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	/* If both are equal go next pointer */
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));

	/*
	 * If there is *, then there are two possibilities
	 * a) We consider current character of second string
	 * b) We ignore current character of second string.
	 */
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
