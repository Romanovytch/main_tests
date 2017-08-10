#include <unistd.h>
#include <stdio.h>

int	ft_eight_queens_puzzle(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	printf("Result of 8 queens algorithm : %d\n", ft_eight_queens_puzzle());
	return (0);
}
