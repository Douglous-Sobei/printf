#include "main.h"

/**
 * printpercent - Prints %
 * @format: format
 * @pa: va_list
 * Return: Number of characters printed
 */
int printpercent(char *format, va_list pa)
{
	(void)format;
	(void)pa;
	_putchar('%');
	return (1);
}
