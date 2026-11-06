#include "ft_printf.h"

int	ft_printf(const char *args, ...)
{
	va_list	ap;
	int	count;

	va_start(ap, args);
	count = 0;
	while (*args)
	{
		if (*args == '%')
		{
			if (!*(args + 1))
				break ;			
			count += print_format(*(++args), &ap);
		}
		else
			count += write (1, args, 1);
		args++;
	}
	va_end(ap);
	return (count);
}
#include <stdio.h>
#include <limits.h>
int main ()
{
	//char *s = "start";
	ft_printf("%u\n", INT_MIN);
	printf("%u\n", INT_MIN);
}
