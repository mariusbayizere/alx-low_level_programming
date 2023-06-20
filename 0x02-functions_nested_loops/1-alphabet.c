#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 * Return: 0 (success)
 */
int _putchar(char i)
{
	return (putchar(i));
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}

int main(void)
{
	print_alphabet();
	 _putchar('\n');
	return (0);
}
