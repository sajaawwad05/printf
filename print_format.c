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
	return (count);
}
