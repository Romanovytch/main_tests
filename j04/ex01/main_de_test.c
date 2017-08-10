/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:40:33 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/09 14:52:45 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	fact;
	fact = ft_recursive_factorial(-1);
	printf("Factorielle -1 : %d\n", fact);
	fact = ft_recursive_factorial(0);
	printf("Factorielle 0 : %d\n", fact);
	fact = ft_recursive_factorial(1);
	printf("Factorielle 1 : %d\n", fact);
	fact = ft_recursive_factorial(2);
	printf("Factorielle 2 : %d\n", fact);
	fact = ft_recursive_factorial(3);
	printf("Factorielle 3 : %d\n", fact);
	fact = ft_recursive_factorial(4);
	printf("Factorielle 4 : %d\n", fact);
	fact = ft_recursive_factorial(10);
	printf("Factorielle 10 : %d\n", fact);
	fact = ft_recursive_factorial(11);
	printf("Factorielle 11 : %d\n", fact);
	fact = ft_recursive_factorial(12);
	printf("Factorielle 12 : %d\n", fact);
	fact = ft_recursive_factorial(13);
	printf("Factorielle 13 : %d\n", fact);
	return (0);
}
