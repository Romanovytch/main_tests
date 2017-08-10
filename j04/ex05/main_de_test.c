/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:40:33 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 13:50:53 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int index);

int	main(void)
{
	int	nb;
	nb = ft_sqrt(0);
	printf("Sqrt 0 : %d, expected 0\n", nb);
		nb = ft_sqrt(1);
	printf("Sqrt 1 : %d, expected 1\n", nb);
		nb = ft_sqrt(4);
	printf("Sqrt 4 : %d expected 2\n", nb);
		nb = ft_sqrt(9);
	printf("Sqrt 9 : %d, expected 3\n", nb);
		nb = ft_sqrt(25);
	printf("Sqrt 25 : %d, expected 5\n", nb);
		nb = ft_sqrt(209033764);
	printf("Sqrt 209033764 : %d, expected 14458\n", nb);
		nb = ft_sqrt(-1);
	printf("Sqrt -1 : %d, expected 0\n", nb);	
	nb = ft_sqrt(48);
	printf("Sqrt 48 : %d, expected 0\n", nb);
	nb = ft_sqrt(206997105);
	printf("Sqrt 206997105 : %d, expected 0\n", nb);
	return (0);
}
