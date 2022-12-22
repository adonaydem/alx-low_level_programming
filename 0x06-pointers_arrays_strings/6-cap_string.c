#include "main.h"

/**
 * string_toupper - Check
 * @str: lop
 * Return: Uppercase
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
	}
	return (str);
}

/**
 * check_seperators - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"'
		, '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
