/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 12:29:41 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 12:37:21 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char str[] = "This sentence is gluten free.\n";
	char str2[] = "";
	char str3[] = "!@#$&&*()_154+--*+][{}|><.//,,";
	
	printf("This sentence is gluten free :\n");
	ft_putstr(str);
	printf("Empty sentence :\n");
	ft_putstr(str2);
	printf("\n!@#$&&*()_154+--*+][{}|><.//,,\n");
	ft_putstr(str3);
}
