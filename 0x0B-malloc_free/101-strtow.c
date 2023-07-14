#include <stdlib.h>
#include <string.h>

int count_words(char *str);
char **allocate_memory(int num_words);
void free_words(char **words, int num_words);
/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 * Return: The function returns a pointeret
 */
char **strtow(char *str)
{
	int num_words, i;
	char **words;
	char *token;

		if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	words = allocate_memory(num_words);

	if (words == NULL)
		return (NULL);
	token = strtok(str, " ");
	i = 0;

	while (token != NULL)
	{
		words[i] = strdup(token);
		if (words[i] == NULL)
		{
			free_words(words, i);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");
	}
	words[i] = NULL;
	return (words);
}
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string to count words from.
 * Return: The function returns the number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		while (i < len && str[i] == ' ')
			i++;
		if (i < len && str[i] != ' ')
		{
			count++;
			while (i < len && str[i] != ' ')
				i++;
		}
		i++;
	}
	return (count);
}
/**
 * allocate_memory - Allocates memory forarray.
 * @num_words: The number of words in the array.
 * Return: The function returns a pointer.
 */
char **allocate_memory(int num_words)
{
	char **words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	return (words);
}
/**
 * free_words - Frees the memory allocated for an array of words.
 * @words: The array of words to be freed.
 * @num_words: The number of words in the array.
 * Return: None.
*/
void free_words(char **words, int num_words)
{
	int i;

	for (i = 0; i < num_words; i++)
	{
		free(words[i]);
	}
	free(words);
}
