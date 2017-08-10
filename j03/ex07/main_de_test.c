#include <unistd.h>

void		ft_strrev(char *str);

int     main()
{
	char *str1;
	char *str2;

	str1 = malloc(1);
	str2 = malloc(29);

	str1[0] = '\0';
	ft_strrev(str1);
	printf("Trying a 0 characters lenght sentence : %s\n", str1);
	str2[0] = 'T';
	str2[1] = 'h';
	str2[2] = 'i';
	str2[3] = 's';
	str2[4] = ' ';
	str2[5] = 's';
	str2[6] = 'e';
	str2[7] = 'n';
	str2[8] = 't';
	str2[9] = 'e';
	str2[10] = 'n';
	str2[11] = 'c';
	str2[12] = 'e';
	str2[13] = ' ';
	str2[14] = 'i';
	str2[15] = 's';
	str2[16] = ' ';
	str2[17] = 'g';
	str2[18] = 'l';
	str2[19] = 'u';
	str2[20] = 't';
	str2[21] = 'e';
	str2[22] = 'n';
	str2[23] = ' ';
	str2[24] = 'f';
	str2[25] = 'r';
	str2[26] = 'e';
	str2[27] = 'e';
	str2[28] = '\n';
	ft_strrev(str2);
	printf("Trying a 29 characters lenght sentence : %s\n", str2);
	free (str1);
	free (str2);
	return (0);
}
