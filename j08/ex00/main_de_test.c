/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:40:06 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/17 10:43:19 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	**ft_split_whitespaces(char *str);

int	main()
{
	char	**tab;
	char	**tab1;
	char	**tab2;
	char	str[] = " This     test   is gluten \t \t free \n \t.";
	char	str1[] = " \n\t ";
	char	str2[28] = "!@#$^&*()_+<>?:{}0123456789";
	int		i;
	
	i = 0;
	tab = ft_split_whitespaces(str);
	printf("Testing : %s\n", str);
	printf("================\n");
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}

	i = 0;
	tab1 = ft_split_whitespaces(str1);
	printf("Testing : %s\n", str1);
	printf("================\n");
	while (tab1[i] != 0)
	{
		printf("%s\n", tab1[i]);
		i++;
	}

	i = 0;
	tab2 = ft_split_whitespaces(str2);
	printf("Testing : %s\n", str2);
	printf("================\n");
	while (tab2[i] != 0)
	{
		printf("%s\n", tab2[i]);
		i++;
	}
return (0);
}
