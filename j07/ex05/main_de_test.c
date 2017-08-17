/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:40:06 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/17 10:09:23 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char	str[] = "  Ceci est   1 fucking 25321123127908test SupEPerPR relou\t\t\t\n .    ";
	char	str2[] = "              ";
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split_whitespaces(str);
	ft_print_words_tables(tab);
	return (0);
}
