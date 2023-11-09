#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!seperator)
			printf("%d", va_arg(list, int));
		else if (seperator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", seperator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
