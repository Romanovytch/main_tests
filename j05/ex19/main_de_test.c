/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 11:39:05 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/14 12:10:00 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "This sentence is long.";
	char dest[100] = "But this sent.";
	int	nb;

	nb = strlcpy(dest, src, 50);
	printf("%s\nnb = %d\n", dest, nb);
	return (0);
}
