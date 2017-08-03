#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int);

void ft_putchar(char c)
{
	write(1, &c, 1);	
}

int	main()
{
	printf("Trying 42 :\n");
	ft_putnbr(42);
	printf("\nTrying -42 :\n");
	ft_putnbr(-42);
	printf("\nTrying 0 :\n");
	ft_putnbr(0);
	printf("\nTrying 2147483647 (int limit+) :\n");
	ft_putnbr(2147483647);
	printf("\nTrying -2147483648 (int limit-) :\n");
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	return (0);
}
