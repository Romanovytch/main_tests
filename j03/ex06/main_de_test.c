#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

int	main()
{
	char	*str;
	char	*str1;
	int		len;

	str = "This sentence is gluten free\n";
	str1 = "\0";
	len = ft_strlen(str);
	printf("Trying a 29 character length sentence : %d\n", len);
	len = ft_strlen(str1);
	printf("Trying a 0 character length sentence : %d\n", len);
	return (0);
}
