/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:27:29 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/22 12:51:42 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);
void	ft_sort_wordtab(char **tab);

int	main()
{
	char	str[] = "  0  \t\n This test   1   \t is   2   gluten  3    free \t \n ! + - / p a z b cb ba ";
	char	str1[] = "";
	char	**tst;
	int		i;

	i = 0;
	tst = ft_split_whitespaces(str);
	ft_sort_wordtab(tst);
	printf("Testing splited str :  0 This test 1 is 2 gluten 3 free ! + - / p a z b cb ba\n");
	while (tst[i] != 0)
	{
		printf("%s\n", tst[i]);
		i++;
	}
	tst = ft_split_whitespaces(str1);
	ft_sort_wordtab(tst);
	printf("Testing empty string : \n");
	while (tst[i] != 0)
	{
		printf("%s\n", tst[i]);
		i++;
	}
	return (0);
}
