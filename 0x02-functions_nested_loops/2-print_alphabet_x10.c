#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase
 * Description: print_alphabet function prints alphabet.
 * Return: lower case alphabet list.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;
		for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
