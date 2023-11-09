#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @seperator: seperator between strings
 * @n: number of arguments
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!seperator)
			printf("%s", str);
		else if (seperator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", seperator, str);
	}

	printf("\n");

	va_end(list);
}
