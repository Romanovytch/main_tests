/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:31:02 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/15 16:39:54 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*tab;
	int max;
	int min;
	int	len;
	int	i;

	i = 0;
	max = 50;
	min = 5;
	len = max - min;
	tab = ft_range(min, max);
	while (i < len)
	   printf("%d\n", tab[i++]);
	printf("Trying max = min :");
	if (ft_range(10, 10) == NULL)
		printf("OK.\n");
	printf("Trying max < min :");
	if (ft_range(10, 5) == NULL)
		printf("OK.\n");
	free(tab);
	return (0);
}
