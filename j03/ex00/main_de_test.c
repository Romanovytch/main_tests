#include <stdio.h>

void	ft_ft(int *nbr);

int	main()
{
	int a;

	a = 0;
	printf("Value of variable before pointer use : %d\n", a);
	ft_ft(&a);
	printf("Value of variable after pointer use : %d\n", a);
	return (0);
}
