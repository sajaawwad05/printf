#include "ft_printf.h"

int	print_hex(unsigned long n, int uppercase)
{
	int	count;
	char	*base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += print_hex(n / 16, uppercase);
	count += write(1, &base[n % 16], 1);
	return (count);
}
