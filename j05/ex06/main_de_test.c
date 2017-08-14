/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:48:30 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/10 14:16:43 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "This sentence is gluten free";
	char	s2[] = "This sentence is gluten free";
	int		ret;

	ret = strcmp(s1, s2);
	printf("Testing same sentences, should return 0 : %d\n", ret);
	return (0);
}
