#include <stdio.h>
#include "main.h"

/**
*main - prints all arguments it receives.
*@argc: count the number of argument
*@argv: array that will listing all argument user will pass
*Return: always sucess(0)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
