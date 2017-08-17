/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:40:06 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/15 16:48:22 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset);

int	main()
{
	char	str[] = ",Coucou,je!suis,une phrase,";
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split(str, ",!");
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
