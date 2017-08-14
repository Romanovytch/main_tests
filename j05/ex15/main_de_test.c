/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:01:28 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 15:18:37 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str[] = "dbhwkbek12782175AAUDMKS:S!@#$^&*)*(+-<>?[]{ }";
	char	str1[] = "";
	char	str2[] = "hello\n\t\r";
	char	str3[] = "jdjkZANANjdewkl";
	char	str4[] = "\vaA";
	int		ret;

	ret = ft_str_is_printable(str);
	printf("Testinig %s : %d, expected 1\n", str, ret);
	ret = ft_str_is_printable(str1);
	printf("Testing %s : %d, expected 1\n", str1, ret);
	ret = ft_str_is_printable(str2);
	printf("Testing %s : %d, expected 0\n", str2, ret);
	ret = ft_str_is_printable(str3);
	printf("Testing %s : %d, expected 1\n", str3, ret);
	ret = ft_str_is_printable(str4);
	printf("Testing %s : %d, expected 0\n", str4, ret);
	return (0);
}
