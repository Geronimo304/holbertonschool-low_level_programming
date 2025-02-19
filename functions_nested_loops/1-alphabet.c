#include "main.h"

/**
 * main - Entry Point
 * Description: Print the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
return (0);
}
