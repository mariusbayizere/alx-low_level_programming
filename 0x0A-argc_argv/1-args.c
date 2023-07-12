#include <stdio.h>
#include "main.h"

/**
*main - count number of argument
*@argc: count the number of argument
*@argv: array that will listing all argument user will pass
*Return: always sucess(0)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
