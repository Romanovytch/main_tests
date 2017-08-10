/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:40:33 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 13:51:40 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	nb;
				
	nb = ft_find_next_prime(-12);
	printf("Find next prime of -12 : %d, expected 2\n", nb);
	nb = ft_find_next_prime(0);
	printf("Find next prime of 0 : %d, expected 2\n", nb);
	nb = ft_find_next_prime(3);
	printf("Find next prime of 3 : %d, expected 3\n", nb);
	nb = ft_find_next_prime(4);
	printf("Find next prime of 4 : %d, expected 5\n", nb);
	nb = ft_find_next_prime(2147483424);
	printf("Find next prime of 2147483424 : %d, expected 2147483477\n", nb);
	nb = ft_find_next_prime(2910);
	printf("Find next prime of 2910 : %d, expected 2917\n", nb);
	return (0);
}
