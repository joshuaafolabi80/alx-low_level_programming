#include "main.h"
/**
 * print_alphabet - fuction to print abc
 *
 * Description: Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0 (successful)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
