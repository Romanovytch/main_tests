/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:21:09 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/17 10:49:25 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	struct s_stock_par *stock;
	int	i;
	int	j;

	i = 0;	
	stock = ft_param_to_tab(argc, argv);
	while (stock[i].str != 0)
	{
		printf("Argument %d :\n", i);
		printf("----------------------\n");
		printf("Size of argument : %d\n", stock[i].size_param);
		printf("Str of argument : %s, address %p\n", stock[i].str, stock[i].str);
		printf("Copy of argument : %s, address %p\n", stock[i].copy, stock[i].copy);
		printf("Words of argument :\n");
		j = 0;
		while (stock[i].tab[j] != 0)
			printf("==== %s\n", stock[i].tab[j++]);
		i++;
	}
	free(stock);
	return (0);
}
