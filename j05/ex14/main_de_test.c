/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:01:28 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 15:16:09 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str[] = "ANJKWEJFCELF";
	char	str1[] = "";
	char	str2[] = "ZHZGAKLSManjkwldnjd";
	char	str3[] = "Z";
	char	str4[] = " aA";
	int		ret;

	ret = ft_str_is_uppercase(str);
	printf("Testinig %s : %d, expected 1\n", str, ret);
	ret = ft_str_is_uppercase(str1);
	printf("Testing %s : %d, expected 1\n", str1, ret);
	ret = ft_str_is_uppercase(str2);
	printf("Testing %s : %d, expected 0\n", str2, ret);
	ret = ft_str_is_uppercase(str3);
	printf("Testing %s : %d, expected 1\n", str3, ret);
	ret = ft_str_is_uppercase(str4);
	printf("Testing %s : %d, expected 0\n", str4, ret);
	return (0);
}
