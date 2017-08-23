/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:27:29 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/22 12:52:32 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	**ft_split_whitespaces(char *str);
void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

int	main()
{
	char	str[] = "  0  \t\n This test   1   \t is   2   gluten  3    free \t \n ! + - / p a z b cb ba ";
	char	**tst;
	int		i;

	i = 0;
	tst = ft_split_whitespaces(str);
	ft_advanced_sort_wordtab(tst, &strcmp);
	while (tst[i] != 0)
	{
		printf("%s\n", tst[i]);
		i++;
	}
	return (0);
}
