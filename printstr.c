#include "main.h"

/**
 * printstr- Print str.
 * @pa: Gtgtg
 * @format: Format str.
 * Return: Fumber str for print.
 */
int printstr(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int contador;
	(void)format;

	if (string == NULL)
		string = "(null)";
	contador = _puts(string);
	return (contador);
}
