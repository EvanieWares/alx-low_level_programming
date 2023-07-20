#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * @...: variable number of numbers to be printed.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	index = 0;
	while (index < n)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		index++;
	}

	printf("\n");

	va_end(nums);
}
