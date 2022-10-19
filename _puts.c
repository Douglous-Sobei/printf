#include "main.h"

/**
 * _puts - Prints a string
 * new line, to stdout.
 * @string: input string
 * Return: count of string.
 */
int _puts(char *string)
{
	int contador = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		contador++;
	}
	return (contador);
}
