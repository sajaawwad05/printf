#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *args, ...);
int	print_char(int c);
int	print_str(char *str);
int	print_format(char specifier, va_list *ap);
int	print_nbr(long n);
#endif
