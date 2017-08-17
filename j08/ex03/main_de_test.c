/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:45:54 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/17 10:48:12 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"

int	main()
{
	int	x;

	x = 42;
	printf("Testing 42 : %d, expected 42\n", ABS(x));
	x = -42;
	printf("Testing -42 : %d, expected 42\n", ABS(x));
	x = 0;
	printf("Testing 0 : %d, expected 0\n", ABS(x));
	return (0);
}
