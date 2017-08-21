/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:43:27 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/21 17:02:18 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);
int		ft_any(char **tab, int(*f)(char*));

int	is_there_a_number(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int	main()
{
	char	str[] = "This is a test";
	char	str1[] = "In this sentence there is a number 0";
	char	str2[] = "";
	char	str3[] = "! @# $ %   ^  &* ( )_)(* &^%$ #- +- * -1 ) (*& ^$  #@ ";
	char	**tab;
	char	**tab1;
	char	**tab2;
	char	**tab3;
	
	tab = ft_split_whitespaces(str);
	printf("Return of ft_any : %d, expected 0\n", ft_any(tab, &is_there_a_number));
	tab1 = ft_split_whitespaces(str1);
	printf("Return of ft_any : %d, expected 1\n", ft_any(tab1, &is_there_a_number));
	tab2 = ft_split_whitespaces(str2);
	printf("Return of ft_any : %d, expected 0\n", ft_any(tab2, &is_there_a_number));
	tab3 = ft_split_whitespaces(str3);
	printf("Return of ft_any : %d, expected 1\n", ft_any(tab3, &is_there_a_number));
	return (0);
}
