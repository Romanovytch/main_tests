/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:40:33 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 13:50:20 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	nb;
	nb = ft_fibonacci(-1);
	printf("Index -1 : %d, expected -1\n", nb);
	nb = ft_fibonacci(0);
	printf("Index 0 : %d, expected 0\n", nb);
	nb = ft_fibonacci(1);
	printf("Index 1 : %d, expected 1\n", nb);
		nb = ft_fibonacci(2);
	printf("Index 2 : %d expected 1\n", nb);
		nb = ft_fibonacci(3);
	printf("Index 3 : %d, expected 2\n", nb);
		nb = ft_fibonacci(4);
	printf("Index 4 : %d, expected 3\n", nb);
		nb = ft_fibonacci(5);
	printf("Index 5 : %d, expected 5\n", nb);
		nb = ft_fibonacci(24);
	printf("Index 24 : %d, expected 46368\n", nb);
		nb = ft_fibonacci(46);
	printf("Index 41 : %d, 1836311903\n", nb);
	
return (0);
}
