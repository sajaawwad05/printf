#include "ft_printf.h"

int	print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (print_str("(nil)"));
	count += print_str("0x");
	count += print_hex((unsigned long)ptr, 0);
	return (count);
}
