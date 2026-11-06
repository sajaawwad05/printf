#include "ft_printf.h"

int	print_nbr(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
	       	write (1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		count += print_nbr(n / 10);
	}
	count += print_char((n % 10) + '0');
	return (count);
}
/*#include <stdio.h>
int main()
{
	int	d = print_nbr(-6667);
	printf("\n%d\n", d);
}*/
