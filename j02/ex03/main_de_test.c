#include <unistd.h>
#include <stdio.h>

void ft_is_negative(int);

void ft_putchar(char c)
{
	write(1, &c, 1);	
}

int	main()
{
	printf("Is 42 P or N ? :\n");
	ft_is_negative(42);
	printf("\nIs -42 P or N ? :\n");
	ft_is_negative(-42);
	printf("\nIs 0 P or N ? :\n");
	ft_is_negative(0);
	ft_putchar('\n');
	return (0);
}
