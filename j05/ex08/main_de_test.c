/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:29:39 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 14:32:52 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "4512dsdfer213a fgfse FFDfcafc 1531f eferf FS Z a z ZAazaAzoewfyPP52";
	char	*test;

	test = ft_strupcase(str);
	printf("%s\n", test);
	return (0);
}
