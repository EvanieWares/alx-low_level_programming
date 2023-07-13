#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
	int count = 0;
	int i, len = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ')
		{
			++len;
		}
		else if (len != 0)
		{
			++count;
			len = 0;
		}
	}

	if (len != 0)
	{
		++count;
	}

	return (count);
}

/**
 * is_all_whitespace - checks if an array of chars is all whitespaces
 * @str: array of chars to check
 * Return: 1 if true, otherwise 0
 */

int is_all_whitespace(const char *str)
{
	while (*str)
	{
		if (!isspace((unsigned char)*str)){
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words),
 * or NULL if str == NULL or str == "".
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0' || is_all_whitespace(str))
		return (NULL);
	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; j < word_count; ++j)
	{
		while (str[i] == ' ')
			++i;
		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			++len;
		words[j] = malloc(sizeof(char) * (len + 1));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; ++k)
				free(words[k]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; ++k)
			words[j][k] = str[i + k];
		words[j][len] = '\0';
		i += len;
	}
	words[j] = NULL;
	return (words);
}
