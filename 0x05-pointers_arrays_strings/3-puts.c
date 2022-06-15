#include "main.h"
#include "_putchar.c"
/**
 * _puts - prints an entire string.
 * @str: tested string
 * Return: always 0.
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		_putchars(*(str + i));
		i++;
	}
	_putchars('\n');
}

