/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:31:02 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/14 22:14:53 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*tab;
	int max;
	int min;
	int	len;
	int	i;

	max = 10;
	min = 5;
	len = ft_ultimate_range(&tab, min, max);
	while (i < len)
	   printf("%d\n", tab[i++]);
	printf("Trying max = min :");
	if (ft_ultimate_range(&tab, 10, 10) == 0)
		printf("OK.\n");
	printf("Trying max < min :");
	if (ft_ultimate_range(&tab, 10, 5) == 0)
		printf("OK.\n");
	free(tab);
	return (0);
}
