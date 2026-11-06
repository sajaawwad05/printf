#include "ft_printf.h"

int	print_format(char specifier, va_list *ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(*ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(*ap, char *));
	else if (specifier == '%')
		count += print_char('%');
	else if (specifier == 'd' || specifier == 'i')
		count += print_nbr(va_arg(*ap, int));
	else if (specifier == 'u')
		count += print_nbr(va_arg(*ap, unsigned int));
	else if (specifier == 'x')
		count += print_hex(va_arg(*ap, unsigned int), 0);
	else if (specifier == 'X')
		count += print_hex(va_arg(*ap, unsigned int), 1);
	else if (specifier == 'p')
		count += print_ptr(va_arg(*ap, void *));
	return (count);
}
