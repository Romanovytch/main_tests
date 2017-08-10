#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int     main()
{
	int div;
	int mod;
	int a;
	int b;

	a = 10;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, reste = %d\n", a, b, div, mod);
	
	a = 33;
	b = 8;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, reste = %d\n", a, b, div, mod);
	
	a = -12;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, reste = %d\n", a, b, div, mod);

	a = 42;
	b = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, reste = %d\n", a, b, div, mod);
	return (0);
}
