/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:22:58 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 15:34:08 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int	main(void)
{
	char	str[25] = "First sentence";
	char	str2[] = "Second sentence";
	char	*tmp;

	tmp = ft_strncat(str, str2, 30);
	printf("%s\n", tmp);
	return (0);
}
