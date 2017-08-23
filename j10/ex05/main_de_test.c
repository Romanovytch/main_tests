/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:43:27 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/22 17:29:12 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);
int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int	cmp(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a > b)
		return (1);
	else
		return (0);
}

int	main()
{
	int		tab[] = {1, 2, 3, 4, 5, 8, 42, 1024};
	int		tab1[] = {-8, -4, 0, 0, 1, 2, 3, 4, 5, 8, 42, 1024};
	int		tab2[] = {1, 2, 3, 4, 1, 5, 8, 42, 1024};
	int		tab3[] = {1024, 42, 8, 5, 4, 3, 2, 1};
	int		tab4[] = {1231631, 2453, 21, -12, -5153, -5153, -5153, -5154, -53465313};
	int		tab5[] = {0, 0};
	int		tab6[] = {};
	;
	printf("Return of ft_is_sort : %d, expected 1\n", ft_is_sort(tab, 8, &cmp));
	printf("Return of ft_is_sort : %d, expected 1\n", ft_is_sort(tab1, 12, &cmp));
	printf("Return of ft_is_sort : %d, expected 0\n", ft_is_sort(tab2, 9, &cmp));
	printf("Return of ft_is_sort : %d, expected 1\n", ft_is_sort(tab3, 8, &cmp));
	printf("Return of ft_is_sort : %d, expected 1\n", ft_is_sort(tab4, 9, &cmp));
	printf("Return of ft_is_sort : %d, expected 1\n", ft_is_sort(tab5, 2, &cmp));
	printf("Return of ft_is_sort : %d, expected 1\n", ft_is_sort(tab6, 0, &cmp));
	return (0);
}
