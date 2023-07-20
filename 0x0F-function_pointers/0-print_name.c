#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to a function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
