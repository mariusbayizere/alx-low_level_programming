#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Checks if a given string represents a valid number.
 *
 * @param str The string to check.
 * @return 1 if the string represents a valid number, 0 otherwise.
 */
int is_number(const char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
/**
 * Multiplies two positive numbers represented as strings and prints the result.
 *
 * @param num1 The first number represented as a string.
 * @param num2 The second number represented as a string.
 */
void multiply(const char *num1, const char *num2)
{
	int length1 = strlen(num1);
	int length2 = strlen(num2);
	int result_length = length1 + length2;
	int *result;
	int digit1;
	int digit2;
	int product;
	int sum;

	result = calloc(result_length, sizeof(int));
	for (int i = length1 - 1; i >= 0; i--)
	{
		for (int j = length2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;
			sum = result[i + j + 1] + product;
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}
	int i = 0;
	while (i < result_length - 1 && result[i] == 0)
	{
		i++;
	}
	for (; i < result_length; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	free(result);
}
/**
 * Main entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv : An array of strings containing the command-line arguments.
 * @return :0 on success, 98 if there's an error with the input.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: Incorrect number of arguments\n");
		return (98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error: Invalid input, numbers must contain only digits\n");
		return (98);
	}
	multiply(argv[1], argv[2]);
	return 0;
}
