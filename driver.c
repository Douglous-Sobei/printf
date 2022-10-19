#include "main.h"

/**
 * driver - Selector for type of fun.
 * @format: String.
 * Description: The function loops through the structs
 * selector[] Ment of the struct.
 * Return: A pointer
 * structype selector[] - Struct
 */

int (*driver(char *format))(char *format, va_list)
{
int i;

structype selector[] = {
{"%c", printc},
{"%s", printstr},
{"%d", printint},
{"%i", printint},
{"%%", printpercent},
{"%x", printhex},
{"%X", printHEX},
{"%o", printocta},
{NULL, NULL}
};

if (format[1] == ' ' || format[1] == '\0')
return (NULL);
for (i = 0; selector[i].q; i++)
{
if (format[1] == selector[i].q[1])
return (selector[i].u);
}
return (NULL);
}
