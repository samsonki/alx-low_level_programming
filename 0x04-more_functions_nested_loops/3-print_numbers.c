#include "main.h"

/**
 * print_numbers - print numbers 0-9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i,
	    i = 0 ;
	while (i < 10)
	{ 
		__putchar (i + '0');
		i++;
	}
	
	_putchar ('\n');
}
