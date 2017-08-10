#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char *str;

	str = "This sentence is gluten free\n";
	ft_putstr(str);
	return (0);
}
