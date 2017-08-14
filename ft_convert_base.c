/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:18:48 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/14 16:52:30 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_power(int nb, int power)
{
	if (power >= 1)
		nb = nb * ft_power(nb, power - 1);
	else if (power < 0)
		nb = 0;
	else
		return (1);
	return (nb);
}

int		to_base_10(char *nbr, char *base_from)
{
	int	bf;
	int	nb_b10;
	int	pow;
	int	i;

	i = 0;
	nb_b10 = 0;
	bf = ft_strlen(base_from);
	pow = ft_strlen(nbr) - 1;
	while (pow >= 0)
	{
		nb_b10 = nb_b10 + (nbr[i] - '0') * ft_power(bf, pow);
		pow--;
		i++;
	}
	return (nb_b10);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*cnb;
	int		nb_base_to;
	int		nb;
	int		i;
	int		pw;
	int		rst;
	int		tmp;
	int		j;

	i = 1;
	cnb = 0;
	rst = 0;
	j = 0;
	nb_base_to = ft_strlen(base_to);
	nb = to_base_10(nbr, base_from); // nb convertit en base 10
	while (ft_power(nb_base_to, i) <= nb) // on cherche la puissance de X juste en dessous de nb
		i++;
	cnb = (char *)malloc(sizeof(char) * i + 1);
	pw = i;
	while (j < i) // On cherche combien de fois on peut trouver la puissance de X dans nb
	{
		pw--;
		tmp = ft_power(nb_base_to, pw);
		rst = nb / tmp;
		nb = nb % tmp;
		cnb[j] = base_to[rst]; // On remplit le tableau par le caractere correspondant
		j++;
	}
	cnb[j] = '\0';
	return (cnb);
}
