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
	int	l = 0;
	ft_printf("%c\n%s\n%d\n%i\n%u\n%x\n%X\n%p\n%%\n", 'c', "jj", 8, 9, 7, 88, 99,&l);
	printf("%c\n%s\n%d\n%i\n%u\n%x\n%X\n%p\n%%\n", 'c', "jj", 8, 9, 7, 88, 99, &l);
}
