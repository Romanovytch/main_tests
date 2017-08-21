/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_de_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:26:53 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/21 16:53:23 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int));
void	ft_putnbr(int);

int	ft_add42(int nb)
{
	return (nb + 42);
}

int	main()
{
	int	tab[] = {42, 1755, -125, 0, 81, 1024};
	int	*ret;
	int	i;

	i = 0;
	ret = ft_map(tab, 6, &ft_add42);
	while (i < 6)
	{
		printf("Ftmap returns %d, expected %d\n", ret[i], tab[i] + 42);
		i++;
	}
	free(ret);
	return (0);
}
