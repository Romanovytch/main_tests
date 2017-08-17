/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:40:06 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/15 17:14:09 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	**ft_split_whitespaces(char *str);

int	main()
{
	char	str[] = " Ceci     est   un test \t \t 1 \n 12345684 poop\t";
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split_whitespaces(str);
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
