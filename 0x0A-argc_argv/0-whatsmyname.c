#include <stdio.h>
#include "main.h"

/**
*main - print name of the program
*@argc: count the number of argument
*@argv: array that will listing all argument user will pass
*Return: always sucess(0)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
