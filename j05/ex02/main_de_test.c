#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int     main()
{
	int nb;

	nb = ft_atoi("\t\f\r\v    12");
	printf("Your atoi shows %d, expected 12\n", nb);
	nb = ft_atoi("+-12");
	printf("Your atoi shows %d, expected 0\n", nb);
	nb = ft_atoi("-12");
	printf("Your atoi shows %d, expected -12\n", nb);
	nb = ft_atoi("+12");
	printf("Your atoi shows %d, expected 12\n", nb);
	nb = ft_atoi("445154511");
	printf("Your atoi shows %d, expected 445154511\n", nb);
	nb = ft_atoi("0");
	printf("Your atoi shows %d, expected 0\n", nb);
	nb = ft_atoi("rjhgfjk45fdkljlkd");
	printf("Your atoi shows %d, expected 0\n", nb);
	nb = ft_atoi("2147483647");
	printf("Your atoi shows %d, expected 2147483647\n", nb);
	nb = ft_atoi("-2147483648");
	printf("Your atoi shows %d, expected -2147483648\n", nb);
	nb = ft_atoi("578");
	printf("Your atoi shows %d, expected 578\n", nb);
	return (0);
}
