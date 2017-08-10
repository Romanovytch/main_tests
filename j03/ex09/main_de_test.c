#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_sort_integer_table(int *tab, int size);

int     main()
{
	int *str1;
	int *str2;
	int i;

	str1 = malloc(1 * sizeof(int));
	str2 = malloc(10 * sizeof(int));

	str1[0] = 10;
	str2[0] = 50;
	str2[1] = 2147648196;
	str2[2] = -1721751;
	str2[3] = 8;
	str2[4] = 0;
	str2[5] = -1;
	str2[6] = 512;
	str2[7] = 424242;
	str2[8] = -424242;
	str2[9] = 30;
	ft_sort_integer_table(str1, 1);
	ft_sort_integer_table(str2, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", str2[i]);
		i = i + 1;
	}
	printf("1 lenght table : %d\n", str1[0]);
	free (str1);
	free (str2);
	return (0);
}
