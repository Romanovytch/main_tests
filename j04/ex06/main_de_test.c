/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:40:33 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 13:51:29 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;
	
	nb = ft_is_prime(0);
	printf("Is  0 prime ? (1 yes, 0 no) : %d, expected 0\n", nb);	
	nb = ft_is_prime(4);
	printf("Is  4 prime ? (1 yes, 0 no) : %d, expected 0\n", nb);	
	nb = ft_is_prime(1);
	printf("Is  1 prime ? (1 yes, 0 no) : %d, expected 0\n", nb);
	nb = ft_is_prime(2);
	printf("Is  2 prime ? (1 yes, 0 no) : %d, expected 1\n", nb);
	nb = ft_is_prime(3);
	printf("Is  3 prime ? (1 yes, 0 no) : %d, expected 1\n", nb);
 	nb = ft_is_prime(7);
	printf("Is  7 prime ? (1 yes, 0 no) : %d, expected 1\n", nb);	
	nb = ft_is_prime(14521);
	printf("Is  14521 prime ? (1 yes, 0 no) : %d, expected 0\n", nb);
	nb = ft_is_prime(42);
	printf("Is  42 prime ? (1 yes, 0 no) : %d, expected 0\n", nb);
	nb = ft_is_prime(-7);
	printf("Is  -7 prime ? (1 yes, 0 no) : %d, expected 0\n", nb);	
	nb = ft_is_prime(214748167);
	printf("Is  214748167 prime ? (1 yes, 0 no) : %d, expected 1\n", nb);
	nb = ft_is_prime(214748364);
	printf("Is  214748364 prime ? (1 yes, 0 no) : %d, expected 0\n", nb);
	nb = ft_is_prime(2147483647);
	printf("Is  2147483647 prime ? (1 yes, 0 no) : %d, expected 1\n", nb);
	nb = ft_is_prime(-2147483648);
	printf("Is  -2147483648 prime ? (1 yes, 0 no) : %d, expected 0\n", nb);
	return (0);
}
