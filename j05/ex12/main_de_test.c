/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:01:28 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 15:13:15 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "123457896152550";
	char	str1[] = "";
	char	str2[] = "anjkwldn78jd";
	char	str3[] = "175150*";
	char	str4[] = " 42";
	int		ret;

	ret = ft_str_is_numeric(str);
	printf("Testinig %s : %d, expected 1\n", str, ret);
	ret = ft_str_is_numeric(str1);
	printf("Testing %s : %d, expected 1\n", str1, ret);
	ret = ft_str_is_numeric(str2);
	printf("Testing %s : %d, expected 0\n", str2, ret);
	ret = ft_str_is_numeric(str3);
	printf("Testing %s : %d, expected 0\n", str3, ret);
	ret = ft_str_is_numeric(str4);
	printf("Testing %s : %d, expected 0\n", str4, ret);
	return (0);
}
