#include "main.h"

/**
 * print_alphabet -it prints alphabets in lowercase followed by a new line
 * Description: above
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = "a"; i <= "z"; i++)
		_putchar(i);
	_putchar('\n');
}
