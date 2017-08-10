/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:40:33 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/09 15:01:52 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	pow;

	pow = ft_recursive_power(0, 4);
	printf("0 puissance 4 : %d\n", pow);
	pow = ft_recursive_power(12, 0);
	printf("12 puissance 0 : %d\n", pow);
	pow = ft_recursive_power(2, 1);
	printf("2 puissance 1 : %d\n", pow);
	pow = ft_recursive_power(-4, 0);
	printf("-4 puissance 0 : %d\n", pow);
	pow = ft_recursive_power(10, 4);
	printf("10 puissance 4 : %d\n", pow);
	pow = ft_recursive_power(5, 2);
	printf("5 puissance 2 : %d\n", pow);
	pow = ft_recursive_power(0, 0);
	printf("0 puissance 0 : %d\n", pow);
	pow = ft_recursive_power(-5, 3);
	printf("-5 puissance 3 : %d\n", pow);
	pow = ft_recursive_power(-5, 2);
	printf("-5 puissance 2 : %d\n", pow);
	return (0);
}
