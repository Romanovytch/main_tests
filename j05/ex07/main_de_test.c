/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:48:30 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 14:23:02 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "Thi";
	char	s2[] = "Thi ";
	int		ret;

	ret = ft_strncmp(s1, s2, 3);
	printf("Testing same sentences, should return 0 : %d\n", ret);
	return (0);
}
