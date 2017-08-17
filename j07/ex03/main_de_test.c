/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:03:04 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/14 22:15:47 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	char	*str;

	str = NULL;
	str = ft_concat_params(argc, argv);
	printf("%s\n", str);
	free(str);
	return (0);
}
