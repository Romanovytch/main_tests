/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:21:09 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/17 10:49:42 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

#include <stdlib.h>

int	main(int argc, char **argv)
{
	struct s_stock_par *stock;

	stock = ft_param_to_tab(argc, argv);
	ft_show_tab(stock);
	free(stock);
	return (0);
}
