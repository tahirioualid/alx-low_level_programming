#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void print_rev_recursion(char *s)
{
	if (*s)
	{
		print_rev_recursion(s + 1);
		putchar(*s);
	}
}
