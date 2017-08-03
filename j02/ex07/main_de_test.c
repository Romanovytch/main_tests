#include <unistd.h>
#include <stdio.h>

void ft_print_combn(int);

void ft_putchar(char c)
{
	write(1, &c, 1);	
}

int	main()
{
	ft_print_combn(1);
	ft_print_combn(2);
	ft_print_combn(3);
	ft_print_combn(4);
	ft_print_combn(5);
	ft_print_combn(6);
	ft_print_combn(7);
 	ft_print_combn(8);
	ft_print_combn(9);
	return (0);
}
