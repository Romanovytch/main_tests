/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:55:35 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/12 10:56:13 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "KfztZDlADBnIqFaYUEVvjmLujjbkRfrU ReKt17+LOl MdR Mdr 4242l42 Tl";
	char	*test;

	test = ft_strcapitalize(str);
	printf("%s\n", test);
	return (0);
}
