/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:31:02 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/21 15:02:28 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int max;
	int min;
	int	len;
	int	i;

	i = 0;
	max = 4;
	min = 0;
	len = ft_ultimate_range(&range, min, max);
	printf("Len returned : %d\n", len);
	if (range == NULL)
		printf("Min is > or = to Max ; Null should be returned : OK\n");
	else
		while (i < len)
	   		printf("%d\n", range[i++]);
	// free(tab);
	printf("Trying max = min :");
	if (ft_ultimate_range(&range, 10, 10) == 0)
		printf("OK.\n");
	printf("Trying max < min :");
	if (ft_ultimate_range(&range, 10, 5) == 0)
		printf("OK.\n");
	return (0);
}
