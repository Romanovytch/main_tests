#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int     main()
{
	int a;
	int b;

	a = 10;
	b = 2;
	printf("%d / %d :\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, reste = %d\n", a, b);
	
	a = 33;
	b = 8;
	printf("%d / %d :\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, reste = %d\n", a, b);
	
	a = -12;
	b = 7;
	printf("%d / %d :\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, reste = %d\n", a, b);

	a = 42;
	b = 0;
	printf("%d / %d :\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, reste = %d\n", a, b);
	return (0);
}
