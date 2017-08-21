/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:26:53 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/21 16:50:20 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	int	tab[] = {42, 1755, -125, 0, 81, 1024};

	printf("Testing empty tab :\n");
	ft_foreach(tab, 0, NULL);
	printf("Ok.\n");
	printf("Testing tab = {42, 1755, -125, 0, 81, 1024} :\n");
	ft_foreach(tab, 6, &ft_putnbr);
	return (0);
}
